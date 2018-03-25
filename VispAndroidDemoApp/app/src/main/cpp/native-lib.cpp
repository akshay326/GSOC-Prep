#include <jni.h>
#include <android/log.h>

#include <visp3/detection/vpDetectorAprilTag.h>

#define  LOG_TAG    "VISP-NDK"
#define  LOG(...)  __android_log_print(ANDROID_LOG_DEBUG,LOG_TAG,__VA_ARGS__)

const char* detectTag(vpImage<u_char> &I);

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
uint w, h;

extern "C"
JNIEXPORT void JNICALL
Java_example_vispapriltag_CameraPreview_initTagDetection(JNIEnv *env, jclass type, jint width,
                                                         jint height) {
    poseEstimationMethod = vpDetectorAprilTag::HOMOGRAPHY_VIRTUAL_VS;
    tagSize = 0.053;
    quad_decimate = 4.0;
    nbThreads = 4;
    cam.initPersProjWithoutDistortion(615.1674805, 615.1675415, 312.1889954, 243.4373779);

    //! [AprilTag detector settings]
    detector.setAprilTagPoseEstimationMethod(poseEstimationMethod);
    detector.setAprilTagNbThreads(nbThreads);
    detector.setAprilTagQuadDecimate(quad_decimate);
    detector.setDisplayTag(true);

    w = (uint) width;
    h = (uint) height;
}

const char* detectTag(vpImage<u_char> &I) {
    try {
        ss.str(""); // emptying or flushing the stream
        t = vpTime::measureTimeMs();
        bool status = detector.detect(I, tagSize, cam, cMo_vec);
        t = vpTime::measureTimeMs() - t;

        ss << "\nDetection time: " << t << " ms for " << detector.getNbObjects() << " tags";

        if (status) {
            //! [Parse detected codes]
            for (size_t i = 0; i < detector.getNbObjects(); i++) {
                ss << "\n  BBox: " << detector.getBBox(i);
                ss << "\n  Pose:\n";
                for(int j = 0; j < vpPoseVector(cMo_vec[i]).size(); ++j)
                    ss << vpPoseVector(cMo_vec[i])[j] << "\t" ;
            }
        }

        const std::string tmp = ss.str();
        LOG("%s", tmp.c_str());
        return tmp.c_str();

    } catch (const vpException &e) {
        LOG("Catch an exception: %s", e.getMessage());
        return e.getMessage();
    }
}
#endif


extern "C"
JNIEXPORT jstring JNICALL
Java_example_vispapriltag_CameraPreview_processArray(JNIEnv *env, jclass type, jbyteArray array_) {
    jbyte *array = env->GetByteArrayElements(array_, NULL);

    // If i don't copy, it's producing SIGSEV fault
    vpImage<u_char> I((u_char *const) array, (const unsigned int) h, (const unsigned int) w, true);

    // memory friendly
    env->ReleaseByteArrayElements(array_, array, 0);

    // Detects tag but unable to update the image, since I.display is not defined
    return env->NewStringUTF(detectTag(I));

    // Since arrays are passed by reference in JNI
//    env->SetByteArrayRegion (array_, 0, w*h, reinterpret_cast<jbyte*>(I.bitmap));
}