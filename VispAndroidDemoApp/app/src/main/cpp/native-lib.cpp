#include <jni.h>
#include <android/log.h>
#include <android/bitmap.h>

#include <visp3/core/vpImageTools.h>
#include <visp3/core/vpDisplay.h>
#include <visp3/detection/vpDetectorAprilTag.h>

#define  LOG_TAG    "** VISP **"
#define  LOGE(...)  __android_log_print(ANDROID_LOG_ERROR,LOG_TAG,__VA_ARGS__)

static void transpose(AndroidBitmapInfo *info, void *pixels) {
    for (int yy = 0; yy < info->height; yy++) {
        uint16_t *line = (uint16_t *) pixels;
        uint16_t *line_end = line + info->width;

        while (line < line_end) {
//            Swapping
//            *line = *line ^ *line_end;
//            *line_end = *line ^ *line_end;
//            *line = *line ^ *line_end;

//            Getting R,G,B values
//            ((*line & 0xF800) >> 11)<<3
//            ((*line & 0x7E0) >> 5)<<2
//            (*line & 0x1F)<<2
            *line = (uint16_t) (((((*line & 0xF800) >> 11) << 3) + \
                        (((*line & 0x7E0) >> 5) << 2) + \
                        (*line & 0x1F) << 2) / 3);
            ++line;
//            --line_end;
        }
    }
}

static void detectTag(vpImage<u_char> &I) {
#ifdef VISP_HAVE_APRILTAG
    vpDetectorAprilTag::vpAprilTagFamily tagFamily = vpDetectorAprilTag::TAG_36h11;
    vpDetectorAprilTag::vpPoseEstimationMethod poseEstimationMethod = vpDetectorAprilTag::HOMOGRAPHY_VIRTUAL_VS;
    double tagSize = 0.053;
    float quad_decimate = 1.0;
    int nbThreads = 2;

    vpCameraParameters cam;
    cam.initPersProjWithoutDistortion(615.1674805, 615.1675415, 312.1889954, 243.4373779);

    std::cout << "cam:\n" << cam << std::endl;
    std::cout << "poseEstimationMethod: " << poseEstimationMethod << std::endl;
    std::cout << "tagFamily: " << tagFamily << std::endl;

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
        //! [Detect and compute pose]
        t = vpTime::measureTimeMs() - t;

        std::stringstream ss;
        ss << "Detection time: " << t << " ms for " << detector.getNbObjects() << " tags";
        vpDisplay::displayText(I, 40, 20, ss.str(), vpColor::red);

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
    }catch (const vpException &e) {
        std::cerr << "Catch an exception: " << e.getMessage() << std::endl;
    }
#endif
}

extern "C"
JNIEXPORT void JNICALL
Java_example_vispapriltag_MainActivity_processImage(JNIEnv *env, jclass type, jobject bitmap) {

    AndroidBitmapInfo info;
    void *pixels;
    int ret;

    if ((ret = AndroidBitmap_getInfo(env, bitmap, &info)) < 0) {
        LOGE("AndroidBitmap_getInfo() failed ! error=%d", ret);
        return;
    }

    if ((ret = AndroidBitmap_lockPixels(env, bitmap, &pixels)) < 0) {
        LOGE("AndroidBitmap_lockPixels() failed ! error=%d", ret);
        return;
    }

    vpImage<uint16_t > I;
    I.init(((uint16_t *) pixels), info.width, info.height, false);

    detectTag(I);
//    transpose(&info, pixels);

    AndroidBitmap_unlockPixels(env, bitmap);
    pixels = I.bitmap;
}