#include <jni.h>
#include <android/log.h>
#include <android/bitmap.h>

#include <visp3/core/vpImageTools.h>
#include <visp3/core/vpImageConvert.h>
#include <visp3/core/vpDisplay.h>
#include <visp3/detection/vpDetectorAprilTag.h>

#define  LOG_TAG    "VISP-NDK"
#define  LOG(...)  __android_log_print(ANDROID_LOG_DEBUG,LOG_TAG,__VA_ARGS__)

void printARGB(AndroidBitmapInfo *info, void *pixels);
void printGreyscale(const vpImage<u_char> &I);
std::string getBitmapFormat(const int &i);
void createGreyScale(vpImage<u_char> &I, void *pixels);
void detectTag(vpImage<u_char> &I);

extern "C" JNIEXPORT void JNICALL
Java_example_vispapriltag_MainActivity_processImage(JNIEnv *env, jclass type, jobject bitmap) {

    AndroidBitmapInfo info;
    void *pixels;
    int ret;

    if ((ret = AndroidBitmap_getInfo(env, bitmap, &info)) < 0) {
        LOG("AndroidBitmap_getInfo() failed ! error=%d", ret);
        return;
    } else
        LOG("Bitmap format: %s", getBitmapFormat(info.format).c_str());

    if ((ret = AndroidBitmap_lockPixels(env, bitmap, &pixels)) < 0) {
        LOG("AndroidBitmap_lockPixels() failed ! error=%d", ret);
        return;
    }

    printARGB(&info, pixels);

    vpImage<u_char> I;
//    I.init((u_char*) pixels,info.height, info.width,false);

    I.init(info.height, info.width);
    createGreyScale(I, pixels);

//    printGreyscale(I);

    detectTag(I);
//    pixels = I.bitmap;

    AndroidBitmap_unlockPixels(env, bitmap);
}

void printARGB(AndroidBitmapInfo *info, void *pixels) {
    // In Android 32 bits go from: 0,1,2....2130~,-2130~,...,-2,-1
    // So for C++
    // The only difference is in ARGB vs ABGR

    for (int yy = 0; yy < info->height; yy++) {
        uint32_t *line = (uint32_t *) pixels;
        uint32_t *line_end = line + info->width;

        int w = 0;
        while (line < line_end) {

            LOG("Color value: %d. ABGR values at (%d,%d) may be: (%d,%d,%d,%d)", *line,yy, w, \
                    (*line >> 24) & 0xff, \
                    (*line >> 16) & 0xff, \
                    (*line >> 8) & 0xff, \
                    (*line) & 0xff);
            ++line;
            ++w;
        }
    }
}

std::string getBitmapFormat(const int &i) {
    switch (i) {
        case ANDROID_BITMAP_FORMAT_A_8:
            return "A_8";
        case ANDROID_BITMAP_FORMAT_RGBA_8888:
            return "RGBA_8888";
        case ANDROID_BITMAP_FORMAT_RGBA_4444:
            return "RGBA_4444";
        case ANDROID_BITMAP_FORMAT_RGB_565:
            return "RGB_565";
        case ANDROID_BITMAP_FORMAT_NONE:
            return "None";

        default:
            return "Format not found";
    }
}

void createGreyScale(vpImage<u_char> &I, void *pixels) {
    for (uint yy = 0; yy < I.getHeight(); yy++) {
        uint32_t *line = (uint32_t *) pixels;
        uint32_t *line_end = line + I.getWidth();

        uint w = 0;
        while (line < line_end) {
            I(yy, w, (const u_char &) (
                    (((*line >> 16) & 0xff) + ((*line >> 8) & 0xff) + ((*line) & 0xff)) / 3));
            ++line;
            ++w;
        }
    }
}

void detectTag(vpImage<u_char> &I) {
#ifdef VISP_HAVE_APRILTAG
    vpDetectorAprilTag::vpAprilTagFamily tagFamily = vpDetectorAprilTag::TAG_36h11;
    vpDetectorAprilTag::vpPoseEstimationMethod poseEstimationMethod = vpDetectorAprilTag::HOMOGRAPHY_VIRTUAL_VS;
    double tagSize = 0.053;
    float quad_decimate = 1.0;
    int nbThreads = 2;

    vpCameraParameters cam;
    cam.initPersProjWithoutDistortion(615.1674805, 615.1675415, 312.1889954, 243.4373779);

    std::stringstream ss;
    ss << "cam:\n" << cam << std::endl;
    ss << "poseEstimationMethod: " << poseEstimationMethod << std::endl;
    ss << "tagFamily: " << tagFamily << std::endl;

    try {
        //! [Create AprilTag detector]
        vpDetectorAprilTag detector(tagFamily);
        //! [Create AprilTag detector]

        //! [AprilTag detector settings]
        detector.setAprilTagQuadDecimate(quad_decimate);
        detector.setAprilTagPoseEstimationMethod(poseEstimationMethod);
        detector.setAprilTagNbThreads(nbThreads);
        detector.setDisplayTag(false);
        //! [AprilTag detector settings]

        double t = vpTime::measureTimeMs();
        //! [Detect and compute pose]
        std::vector<vpHomogeneousMatrix> cMo_vec;
        detector.detect(I, tagSize, cam, cMo_vec);
//        detector.detect(I);
        //! [Detect and compute pose]
        t = vpTime::measureTimeMs() - t;

        ss << "Detection time: " << t << " ms for " << detector.getNbObjects() << " tags";
        const std::string tmp = ss.str();
        LOG("%s", tmp.c_str());

        //! [Parse detected codes]
        for (size_t i = 0; i < detector.getNbObjects(); i++) {
            //! [Parse detected codes]
            //! [Get location]
//            std::vector<vpImagePoint> p = detector.getPolygon(i);
            vpRect bbox = detector.getBBox(i);
            //! [Get location]
            vpDisplay::displayRectangle(I, bbox, vpColor::green);
            //! [Get message]
            vpDisplay::displayText(I, (int) (bbox.getTop() - 10), (int) bbox.getLeft(),
                                   "Message: \"" + detector.getMessage(i) + "\"", vpColor::red);
            //! [Get message]
//            for (size_t j = 0; j < p.size(); j++) {
//                vpDisplay::displayCross(I, p[j], 14, vpColor::red, 3);
//                std::ostringstream number;
//                number << j;
//                vpDisplay::displayText(I, p[j] + vpImagePoint(15, 5), number.str(), vpColor::blue);
//            }
        }
    } catch (const vpException &e) {
        LOG("Catch an exception: %s", e.getMessage());
    }
#endif
}

void printGreyscale(const vpImage<u_char> &I){
    std::stringstream ss;
    for(uint i = 0;i<I.getWidth();++i)
        for(uint j = 0;j<I.getHeight();++j)
            ss << "At ("<<i<<","<<j<<"): "<<(u_int) I(i,j)<<"\n";
    const std::string tmp = ss.str();
    LOG("%s", tmp.c_str());
}