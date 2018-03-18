#include <jni.h>
#include <string>
#include <android/log.h>
#include <visp3/imgproc/vpImgproc.h>
#include <android/bitmap.h>

#define LOG(...) __android_log_print(ANDROID_LOG_VERBOSE, "** VISP **", __VA_ARGS__);
/* Set to 1 to optimize memory stores when generating plasma. */
#define OPTIMIZE_WRITES  1

/* We're going to perform computations for every pixel of the target
 * bitmap. floating-point operations are very slow on ARMv5, and not
 * too bad on ARMv7 with the exception of trigonometric functions.
 *
 * For better performance on all platforms, we're going to use fixed-point
 * arithmetic and all kinds of tricks
 */

typedef int32_t  Fixed;

#define  FIXED_BITS           16
#define  FIXED_ONE            (1 << FIXED_BITS)
#define  FIXED_AVERAGE(x,y)   (((x) + (y)) >> 1)

#define  FIXED_FROM_INT(x)    ((x) << FIXED_BITS)
#define  FIXED_TO_INT(x)      ((x) >> FIXED_BITS)

#define  FIXED_FROM_FLOAT(x)  ((Fixed)((x)*FIXED_ONE))
#define  FIXED_TO_FLOAT(x)    ((x)/(1.*FIXED_ONE))

#define  FIXED_MUL(x,y)       (((int64_t)(x) * (y)) >> FIXED_BITS)
#define  FIXED_DIV(x,y)       (((int64_t)(x) * FIXED_ONE) / (y))

#define  FIXED_DIV2(x)        ((x) >> 1)
#define  FIXED_AVERAGE(x,y)   (((x) + (y)) >> 1)

#define  FIXED_FRAC(x)        ((x) & ((1 << FIXED_BITS)-1))
#define  FIXED_TRUNC(x)       ((x) & ~((1 << FIXED_BITS)-1))

#define  FIXED_FROM_INT_FLOAT(x,f)   (Fixed)((x)*(FIXED_ONE*(f)))

typedef int32_t  Angle;

#define  ANGLE_BITS              9

#if ANGLE_BITS < 8
#  error ANGLE_BITS must be at least 8
#endif

#define  ANGLE_2PI               (1 << ANGLE_BITS)
#define  ANGLE_PI                (1 << (ANGLE_BITS-1))
#define  ANGLE_PI2               (1 << (ANGLE_BITS-2))
#define  ANGLE_PI4               (1 << (ANGLE_BITS-3))

#define  ANGLE_FROM_FLOAT(x)   (Angle)((x)*ANGLE_PI/M_PI)
#define  ANGLE_TO_FLOAT(x)     ((x)*M_PI/ANGLE_PI)

#if ANGLE_BITS <= FIXED_BITS
#  define  ANGLE_FROM_FIXED(x)     (Angle)((x) >> (FIXED_BITS - ANGLE_BITS))
#  define  ANGLE_TO_FIXED(x)       (Fixed)((x) << (FIXED_BITS - ANGLE_BITS))
#else
#  define  ANGLE_FROM_FIXED(x)     (Angle)((x) << (ANGLE_BITS - FIXED_BITS))
#  define  ANGLE_TO_FIXED(x)       (Fixed)((x) >> (ANGLE_BITS - FIXED_BITS))
#endif

static Fixed  angle_sin_tab[ANGLE_2PI+1];

static __inline__ Fixed angle_sin( Angle  a )
{
    return angle_sin_tab[(uint32_t)a & (ANGLE_2PI-1)];
}

static __inline__ Fixed angle_cos( Angle  a )
{
    return angle_sin(a + ANGLE_PI2);
}

static __inline__ Fixed fixed_sin( Fixed  f )
{
    return angle_sin(ANGLE_FROM_FIXED(f));
}

static __inline__ Fixed  fixed_cos( Fixed  f )
{
    return angle_cos(ANGLE_FROM_FIXED(f));
}

extern "C" {

void image_process();
void fill_plasma(AndroidBitmapInfo*  info, void*  pixels);
void detect_tag();

JNIEXPORT void JNICALL Java_example_vispapriltag_MainActivity_processImage(
        JNIEnv *env, jobject thiz, jobject bitmap) {

    AndroidBitmapInfo  info;
    void*              pixels;
    int                ret;
    static int         init;

    if ((ret = AndroidBitmap_getInfo(env, bitmap, &info)) < 0) {
        LOG("AndroidBitmap_getInfo() failed ! error=%d", ret);
        return;
    }

    if (info.format != ANDROID_BITMAP_FORMAT_RGB_565) {
        LOG("Bitmap format is not RGB_565 !");
        return;
    }

    if ((ret = AndroidBitmap_lockPixels(env, bitmap, &pixels)) < 0) {
        LOG("AndroidBitmap_lockPixels() failed ! error=%d", ret);
    }

    /* Now fill the values with a nice little plasma */
    fill_plasma(&info, pixels);

    AndroidBitmap_unlockPixels(env, bitmap);
}



static void fill_plasma( AndroidBitmapInfo*  info, void*  pixels){
    Fixed yt1 = FIXED_FROM_FLOAT(t/1230.);
    Fixed yt2 = yt1;
    Fixed xt10 = FIXED_FROM_FLOAT(t/3000.);
    Fixed xt20 = xt10;

#define  YT1_INCR   FIXED_FROM_FLOAT(1/100.)
#define  YT2_INCR   FIXED_FROM_FLOAT(1/163.)

    int  yy;
    for (yy = 0; yy < info->height; yy++) {
        uint16_t*  line = (uint16_t*)pixels;
        Fixed      base = fixed_sin(yt1) + fixed_sin(yt2);
        Fixed      xt1 = xt10;
        Fixed      xt2 = xt20;

        yt1 += YT1_INCR;
        yt2 += YT2_INCR;

#define  XT1_INCR  FIXED_FROM_FLOAT(1/173.)
#define  XT2_INCR  FIXED_FROM_FLOAT(1/242.)

#if OPTIMIZE_WRITES
        /* optimize memory writes by generating one aligned 32-bit store
         * for every pair of pixels.
         */
        uint16_t*  line_end = line + info->width;

        if (line < line_end) {
            if (((uint32_t)(uintptr_t)line & 3) != 0) {
                Fixed ii = base + fixed_sin(xt1) + fixed_sin(xt2);

                xt1 += XT1_INCR;
                xt2 += XT2_INCR;

                line[0] = palette_from_fixed(ii >> 2);
                line++;
            }

            while (line + 2 <= line_end) {
                Fixed i1 = base + fixed_sin(xt1) + fixed_sin(xt2);
                xt1 += XT1_INCR;
                xt2 += XT2_INCR;

                Fixed i2 = base + fixed_sin(xt1) + fixed_sin(xt2);
                xt1 += XT1_INCR;
                xt2 += XT2_INCR;

                uint32_t  pixel = ((uint32_t)palette_from_fixed(i1 >> 2) << 16) |
                                   (uint32_t)palette_from_fixed(i2 >> 2);

                ((uint32_t*)line)[0] = pixel;
                line += 2;
            }

            if (line < line_end) {
                Fixed ii = base + fixed_sin(xt1) + fixed_sin(xt2);
                line[0] = palette_from_fixed(ii >> 2);
                line++;
            }
        }
#else /* !OPTIMIZE_WRITES */
        int xx;
        for (xx = 0; xx < info->width; xx++) {

            Fixed ii = base + fixed_sin(xt1) + fixed_sin(xt2);

            xt1 += XT1_INCR;
            xt2 += XT2_INCR;

            line[xx] = palette_from_fixed(ii / 4);
        }
#endif /* !OPTIMIZE_WRITES */

        // go to next line
        pixels = (char*)pixels + info->stride;
    }
}

void detect_tag() {
#ifdef VISP_HAVE_APRILTAG
    std::string input_filename = "AprilTag.pgm";
    vpAprilTagFamily tagFamily = vpDetectorAprilTag::TAG_36h11;
    vpDetectorAprilTag::vpPoseEstimationMethod poseEstimationMethod
                = vpDetectorAprilTag::HOMOGRAPHY_VIRTUAL_VS;
    double tagSize = 0.053;
    float quad_decimate = 1.0;
    int nThreads = 1;
    std::string intrinsic_file = "";
    std::string camera_name = "";
    bool display_tag = false;

    vpCameraParameters cam;
    cam.initPersProjWithoutDistortion(615.1674805, 615.1675415, 312.1889954, 243.4373779);
    std::cout << "cam:\n" << cam << std::endl;
    std::cout << "poseEstimationMethod: " << poseEstimationMethod << std::endl;
    std::cout << "tagFamily: " << tagFamily << std::endl;
    try {
        vpImage<unsigned char> I;
        vpImageIo::read(I, input_filename);

        vpDetectorAprilTag detector(tagFamily);
        detector.setAprilTagQuadDecimate(quad_decimate);
        detector.setAprilTagPoseEstimationMethod(poseEstimationMethod);
        detector.setAprilTagNbThreads(nThreads);
        detector.setDisplayTag(display_tag);
        vpDisplay::display(I);
        double t = vpTime::measureTimeMs();
        std::vector<vpHomogeneousMatrix> cMo_vec;
        detector.detect(I, tagSize, cam, cMo_vec);
        t = vpTime::measureTimeMs() - t;
        std::stringstream ss;
        ss << "Detection time: " << t << " ms for " << detector.getNbObjects() << " tags";
        vpDisplay::displayText(I, 40, 20, ss.str(), vpColor::red);
        for (size_t i = 0; i < detector.getNbObjects(); i++) {
            std::vector<vpImagePoint> p = detector.getPolygon(i);
            vpRect bbox = detector.getBBox(i);
            vpDisplay::displayRectangle(I, bbox, vpColor::green);
            vpDisplay::displayText(I, (int) (bbox.getTop() - 10), (int) bbox.getLeft(),
                                   "Message: \"" + detector.getMessage(i) + "\"", vpColor::red);
            for (size_t j = 0; j < p.size(); j++) {
                vpDisplay::displayCross(I, p[j], 14, vpColor::red, 3);
                std::ostringstream number;
                number << j;
                vpDisplay::displayText(I, p[j] + vpImagePoint(15, 5), number.str(), vpColor::blue);
            }
        }
        vpDisplay::displayText(I, 20, 20, "Click to display tag poses", vpColor::red);
        vpDisplay::flush(I);
        vpDisplay::getClick(I);
        vpDisplay::display(I);
        for (size_t i = 0; i < cMo_vec.size(); i++) {
            vpDisplay::displayFrame(I, cMo_vec[i], cam, tagSize / 2, vpColor::none, 3);
        }
        vpDisplay::displayText(I, 20, 20, "Click to quit.", vpColor::red);
        vpDisplay::flush(I);
        vpDisplay::getClick(I);
    } catch (const vpException &e) {
        std::cerr << "Catch an exception: " << e.getMessage() << std::endl;
    }
#endif
}

void image_process() {
#if defined(VISP_HAVE_MODULE_IMGPROC)
    double alpha = 10.0, beta = 50.0;
    double gamma = 3.5;
    int scale = 240, scaleDiv = 3, level = 0, kernelSize = -1;
    double dynamic = 3.0;

    vpImage<vpRGBa> image_original, image_temp;
    vpImage<vpRGBa> image_result(image_original.getHeight(), 2 * image_original.getWidth());
    image_result.insert(image_original, vpImagePoint());

    vp::adjust(image_original, image_temp, alpha, beta);
    image_result.insert(image_temp, vpImagePoint(0, image_original.getWidth()));

    vp::gammaCorrection(image_original, image_temp, gamma);
    image_result.insert(image_temp, vpImagePoint(0, image_original.getWidth()));

    vp::equalizeHistogram(image_original, image_temp);
    image_result.insert(image_temp, vpImagePoint(0, image_original.getWidth()));

    vp::retinex(image_original, image_temp, scale, scaleDiv, level, dynamic, kernelSize);
    image_result.insert(image_temp, vpImagePoint(0, image_original.getWidth()));


#endif
}
}