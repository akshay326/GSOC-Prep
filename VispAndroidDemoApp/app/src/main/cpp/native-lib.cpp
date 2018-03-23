#include <jni.h>
#include <android/log.h>

#include <visp3/core/vpImageTools.h>
#include <visp3/core/vpImageConvert.h>
#include <visp3/core/vpDisplay.h>
#include <visp3/detection/vpDetectorAprilTag.h>

#define  LOG_TAG    "VISP-NDK"
#define  LOG(...)  __android_log_print(ANDROID_LOG_DEBUG,LOG_TAG,__VA_ARGS__)

void printGreyscale(const vpImage<u_char> &I);
std::string detectTag(vpImage<u_char> &I);

std::string detectTag(vpImage<u_char> &I) {
#ifdef VISP_HAVE_APRILTAG
    vpDetectorAprilTag::vpAprilTagFamily tagFamily = vpDetectorAprilTag::TAG_36h11;
    vpDetectorAprilTag::vpPoseEstimationMethod poseEstimationMethod = vpDetectorAprilTag::HOMOGRAPHY_VIRTUAL_VS;
    double tagSize = 0.023;
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

        //! [AprilTag detector settings]
        detector.setAprilTagPoseEstimationMethod(poseEstimationMethod);
        detector.setAprilTagNbThreads(nbThreads);
        detector.setAprilTagQuadDecimate(quad_decimate);
        detector.setDisplayTag(true);

        std::vector<vpHomogeneousMatrix> cMo_vec;

        double t = vpTime::measureTimeMs();
        bool status = detector.detect(I, tagSize, cam, cMo_vec);
        t = vpTime::measureTimeMs() - t;

        ss << "\nDetection time: " << t << " ms for " << detector.getNbObjects() << " tags";

        if (status){
            const std::string tmp = ss.str();
            LOG("%s", tmp.c_str());

            //! [Parse detected codes]
            for (size_t i = 0; i < detector.getNbObjects(); i++) {
                //! [Get location]
                vpRect bbox = detector.getBBox(i);
                //! [Get location]
                vpDisplay::displayRectangle(I, bbox, vpColor::green);
                //! [Get message]
                vpDisplay::displayText(I, (int) (bbox.getTop() - 10), (int) bbox.getLeft(),
                                       "Message: \"" + detector.getMessage(i) + "\"", vpColor::red);
                // ss << "  Pose: " << vpPoseVector(cMo_vec[i]).t() << std::endl;
            }

        } else
            ss << "\nNothing detected";

        const std::string tmp = ss.str();
        LOG("%s", tmp.c_str());
        return tmp;

    } catch (const vpException &e) {
        LOG("Catch an exception: %s", e.getMessage());
    }
#endif
}

//
// Will print at max a 15x15 matrix
void printGreyscale(const vpImage<u_char> &I){
    uint i_jump = I.getWidth() < 15?1: (I.getWidth()/15);
    uint j_jump = I.getHeight() < 15?1: (I.getHeight()/15);

    std::stringstream ss;
    for(uint i = 0;i<I.getWidth();i += i_jump) {
        ss << "[ ";
        for (uint j = 0; j < I.getHeight(); j += j_jump)
            ss << (u_int) I(i, j) << " ";
        ss<<"]\n";
    }
    const std::string tmp = ss.str();
    LOG("%s", tmp.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_example_vispapriltag_MainActivity_processArray(JNIEnv *env, jclass type, jbyteArray array_,
                                                    jint width, jint height) {
    jbyte *array = env->GetByteArrayElements(array_, NULL);

    // If i don't copy, it's producing SIGSEV fault
    vpImage<u_char> I((u_char *const) array, (const unsigned int) height, (const unsigned int) width,
                      true);

//    printGreyscale(I);

    env->ReleaseByteArrayElements(array_, array, 0);
    return env->NewStringUTF(detectTag(I).c_str());
}