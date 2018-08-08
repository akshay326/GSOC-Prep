#include <jni.h>
#include <android/log.h>
#include <visp3/detection/vpDetectorAprilTag.h>
#include <visp3/core/vpImage.h>
#include <visp3/core/vpImagePoint.h>
#include <visp3/core/vpRect.h>

#define  LOG_TAG    "VISP-NDK"
#define  LOG(...)  __android_log_print(ANDROID_LOG_DEBUG,LOG_TAG,__VA_ARGS__)

void detectTag(vpImage<u_char> &I);

void drawRect( vpImage<u_char>& img, const vpRect& rect, const u_char& color);
void drawLine( vpImage<u_char>& img, const vpImagePoint& pt1, const vpImagePoint& pt2, const u_char& color);
void drawThickRect( vpImage<u_char>& img, const vpRect& rect, const u_char& color, int thickness);
void drawThickLine( vpImage<u_char>& img,vpImagePoint,vpImagePoint, const u_char& color, int thickness);


#ifdef VISP_HAVE_APRILTAG

//! Init detection parameters only once, for faster conversion
vpDetectorAprilTag::vpAprilTagFamily tagFamily = vpDetectorAprilTag::TAG_36h11;
vpDetectorAprilTag::vpPoseEstimationMethod poseEstimationMethod;
vpCameraParameters cam;
double tagSize, t;
float quad_decimate;
int nbThreads;
vpDetectorAprilTag detector(tagFamily);  //! Create AprilTag detector
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

void detectTag(vpImage<u_char> &I) {
    try {
        ss.str(""); // emptying or flushing the stream
        t = vpTime::measureTimeMs();
        bool status = detector.detect(I, tagSize, cam, cMo_vec);
        t = vpTime::measureTimeMs() - t;

        ss << "\nDetection time: " << t << " ms for " << detector.getNbObjects() << " tags";

        if (status) {

            //! [Parse detected codes]
            for (size_t i = 0; i < detector.getNbObjects(); i++) {
//                ss << "\n  BBox: " << detector.getBBox(i);
//                ss << "\n  Pose: " << vpPoseVector(cMo_vec[i]).data << std::endl;
                drawThickLine(I,detector.getBBox(i).getTopLeft(),
                              vpImagePoint(detector.getBBox(i).getLeft(),detector.getBBox(i).getBottom()),255,8);
            }
        }

        const std::string tmp = ss.str();
        LOG("%s", tmp.c_str());

    } catch (const vpException &e) {
        LOG("Catch an exception: %s", e.getMessage());
    }
}
#endif


extern "C"
JNIEXPORT void JNICALL
Java_example_vispapriltag_CameraPreview_processArray(JNIEnv *env, jclass type, jbyteArray array_) {
    jbyte *array = env->GetByteArrayElements(array_, NULL);

    // If i don't copy, it's producing SIGSEV fault
    vpImage<u_char> I((u_char *const) array, (const unsigned int) h, (const unsigned int) w, true);

    // Detects tag and updates the image too
    detectTag(I);

    // memory friendly
    env->ReleaseByteArrayElements(array_, array, 0);

    // Since arrays are passed by reference in JNI
    env->SetByteArrayRegion (array_, 0, w*h, reinterpret_cast<jbyte*>(I.bitmap));
}


// Assuming grey scale image for now
void drawLine( vpImage<u_char>& img, const vpImagePoint& pt1, const vpImagePoint& pt2, const u_char& color){

    double dx = pt1.get_i() - pt2.get_i();
    double dy = pt1.get_j() - pt2.get_j();
    double D = 2*dy - dx;
    uint i, j = (uint) pt1.get_j();

    for(double x = pt1.get_i(); x < pt2.get_i();++x){
        i = (uint) x;
        img(i,j,color);
        if (D > 0) {
            ++j;
            D = D - 2 * dx;
        }
        D = D + 2*dy;
    }
}


// A very inefficient way
void drawThickLine( vpImage<u_char>& img, vpImagePoint pt1, vpImagePoint pt2, const u_char& color, int thickness){
    pt1.set_i(pt1.get_i() + thickness/2);
    pt2.set_j(pt2.get_j() + thickness/2);
    pt1.set_i(pt1.get_i() + thickness/2);
    pt2.set_j(pt2.get_j() + thickness/2);

    while(thickness > 0){
        drawLine(img,pt1,pt2,color);

        pt1.set_i(pt1.get_i()-1);
        pt2.set_j(pt2.get_j()-1);
        pt1.set_i(pt1.get_i()-1);
        pt2.set_j(pt2.get_j()-1);

        --thickness;
    }
}

// Assuming grey scale image for now
void drawRect( vpImage<u_char>& img, const vpRect& rect, const u_char& color){
    vpImagePoint bottomLeft = vpImagePoint(rect.getLeft(),rect.getBottom());
    vpImagePoint topRight = vpImagePoint(rect.getRight(),rect.getTop());

    drawLine(img,rect.getTopLeft(),bottomLeft,color);
    drawLine(img,bottomLeft, rect.getBottomRight(),color);
    drawLine(img,rect.getBottomRight(),topRight,color);
    drawLine(img,topRight,rect.getTopLeft(),color);
}

// Assuming grey scale image for now
void drawThickRect( vpImage<u_char>& img, const vpRect& rect, const u_char& color, int thickness){
    vpImagePoint bottomLeft = vpImagePoint(rect.getLeft(),rect.getBottom());
    vpImagePoint topRight = vpImagePoint(rect.getRight(),rect.getTop());

    drawThickLine(img,rect.getTopLeft(),bottomLeft,color,thickness);
    drawThickLine(img,bottomLeft, rect.getBottomRight(),color,thickness);
    drawThickLine(img,rect.getBottomRight(),topRight,color,thickness);
    drawThickLine(img,topRight,rect.getTopLeft(),color,thickness);
}