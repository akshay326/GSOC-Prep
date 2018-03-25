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

#ifdef VISP_HAVE_APRILTAG
    // Init detection parameters only once, for faster conversion
    vpDetectorAprilTag::vpAprilTagFamily tagFamily = vpDetectorAprilTag::TAG_36h11;
    vpDetectorAprilTag::vpPoseEstimationMethod poseEstimationMethod;
    vpCameraParameters cam;
    double tagSize, t;
    float quad_decimate;
    int nbThreads;
    vpDetectorAprilTag detector(tagFamily);  // Create AprilTag detector
    std::vector<vpHomogeneousMatrix> cMo_vec;
    std::stringstream ss;
    u_char *grey;
    uint w, h;

extern "C"
JNIEXPORT void JNICALL
Java_example_vispapriltag_CameraPreview_initTagDetection(JNIEnv *env, jclass type, jint width, jint height) {
    poseEstimationMethod = vpDetectorAprilTag::HOMOGRAPHY_VIRTUAL_VS;
    tagSize = 0.053;
    quad_decimate = 4.0;
    nbThreads = 4;
    cam.initPersProjWithoutDistortion(615.1674805, 615.1675415, 312.1889954, 243.4373779);

    //! [AprilTag detector settings]
    detector.setAprilTagPoseEstimationMethod(poseEstimationMethod);
    detector.setAprilTagNbThreads(nbThreads);
    detector.setAprilTagQuadDecimate(quad_decimate);
    detector.setDisplayTag(false);

    w = (uint) width;
    h = (uint) height;

    // initialize the greyscale pointer
    grey = new u_char[w*h];
}

std::string detectTag(vpImage<u_char> &I) {
    try {
        ss.str(""); // emptying or flushing the stream
        t = vpTime::measureTimeMs();
        bool status = detector.detect(I, tagSize, cam, cMo_vec);
        t = vpTime::measureTimeMs() - t;

        ss << "\nDetection time: " << t << " ms for " << detector.getNbObjects() << " tags";

        if (status){
            const std::string tmp = ss.str();
            LOG("%s", tmp.c_str());

//            //! [Parse detected codes]
//            for (size_t i = 0; i < detector.getNbObjects(); i++) {
//                //! [Get location]
//                vpRect bbox = detector.getBBox(i);
//                //! [Get location]
//                vpDisplay::displayRectangle(I, bbox, vpColor::green);
//                //! [Get message]
//                vpDisplay::displayText(I, (int) (bbox.getTop() - 10), (int) bbox.getLeft(),
//                                       "Message: \"" + detector.getMessage(i) + "\"", vpColor::red);
//                // ss << "  Pose: " << vpPoseVector(cMo_vec[i]).t() << std::endl;
//            }

        }

        const std::string tmp = ss.str();
        LOG("%s", tmp.c_str());
        return tmp;

    } catch (const vpException &e) {
        LOG("Catch an exception: %s", e.getMessage());
        return e.getMessage();
    }
}
#endif

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
Java_example_vispapriltag_CameraPreview_processArray(JNIEnv *env, jclass type, jbyteArray array_) {
    jbyte *array = env->GetByteArrayElements(array_, NULL);

    // If i don't copy, it's producing SIGSEV fault
    vpImage<u_char> I((u_char *const) array, (const unsigned int) h, (const unsigned int) w,
                      true);

//    printGreyscale(I);

    env->ReleaseByteArrayElements(array_, array, 0);
    return env->NewStringUTF(detectTag(I).c_str());
}