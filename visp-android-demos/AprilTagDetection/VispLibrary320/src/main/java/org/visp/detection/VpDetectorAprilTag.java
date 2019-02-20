//
// This file is auto-generated. Please don't modify it!
//
package org.visp.detection;

import org.visp.core.VpCameraParameters;
import org.visp.core.VpHomogeneousMatrix;

// C++: class VpDetectorAprilTag
//javadoc: VpDetectorAprilTag

public class VpDetectorAprilTag {

    public final long nativeObj;
    public VpDetectorAprilTag(long addr) { nativeObj = addr; }

    public long getNativeObjAddr() { return nativeObj; }

    // internal usage only
    public static VpDetectorAprilTag __fromPtr__(long addr) { return new VpDetectorAprilTag(addr); }

    //
    // C++:  bool getPose(size_t tagIndex, double tagSize, vpCameraParameters cam, vpHomogeneousMatrix cMo)
    //

    //javadoc: VpDetectorAprilTag::getPose(tagIndex, tagSize, cam, cMo)

    public  boolean getPose(long tagIndex, double tagSize, VpCameraParameters cam, VpHomogeneousMatrix cMo)
    {
        
        boolean retVal = getPose_0(nativeObj, tagIndex, tagSize, cam.nativeObj, cMo.nativeObj);
        
        return retVal;
    }
                
    //
    // C++:  void setAprilTagNbThreads(int nThreads)
    //

    //javadoc: VpDetectorAprilTag::setAprilTagNbThreads(nThreads)

    public  void setAprilTagNbThreads(int nThreads)
    {
        
        setAprilTagNbThreads_0(nativeObj, nThreads);
        
        return;
    }
                
    //
    // C++:  void setAprilTagQuadDecimate(float quadDecimate)
    //

    //javadoc: VpDetectorAprilTag::setAprilTagQuadDecimate(quadDecimate)

    public  void setAprilTagQuadDecimate(float quadDecimate)
    {
        
        setAprilTagQuadDecimate_0(nativeObj, quadDecimate);
        
        return;
    }
                
    //
    // C++:  void setAprilTagQuadSigma(float quadSigma)
    //

    //javadoc: VpDetectorAprilTag::setAprilTagQuadSigma(quadSigma)

    public  void setAprilTagQuadSigma(float quadSigma)
    {
        
        setAprilTagQuadSigma_0(nativeObj, quadSigma);
        
        return;
    }
                
    //
    // C++:  void setAprilTagRefineDecode(bool refineDecode)
    //

    //javadoc: VpDetectorAprilTag::setAprilTagRefineDecode(refineDecode)

    public  void setAprilTagRefineDecode(boolean refineDecode)
    {
        
        setAprilTagRefineDecode_0(nativeObj, refineDecode);
        
        return;
    }
                
    //
    // C++:  void setAprilTagRefineEdges(bool refineEdges)
    //

    //javadoc: VpDetectorAprilTag::setAprilTagRefineEdges(refineEdges)

    public  void setAprilTagRefineEdges(boolean refineEdges)
    {
        
        setAprilTagRefineEdges_0(nativeObj, refineEdges);
        
        return;
    }
                
    //
    // C++:  void setAprilTagRefinePose(bool refinePose)
    //

    //javadoc: VpDetectorAprilTag::setAprilTagRefinePose(refinePose)

    public  void setAprilTagRefinePose(boolean refinePose)
    {
        
        setAprilTagRefinePose_0(nativeObj, refinePose);
        
        return;
    }
                
    //
    // C++:  void setDisplayTag(bool display, vpColor color = vpColor::none, int thickness = 2)
    //

    //javadoc: VpDetectorAprilTag::setDisplayTag(display, thickness)

    public  void setDisplayTag(boolean display, int thickness)
    {
        
        setDisplayTag_0(nativeObj, display, thickness);
        
        return;
    }
                    //javadoc: VpDetectorAprilTag::setDisplayTag(display)

    public  void setDisplayTag(boolean display)
    {
        
        setDisplayTag_1(nativeObj, display);
        
        return;
    }
                
	//
	// manual port
	// C++: vpPoseEstimationMethod getPoseEstimationMethod()
	//
	//javadoc: VpDetectorAprilTag::getPoseEstimationMethod()

	public int getPoseEstimationMethod()
	{
	   return getPoseEstimationMethod(nativeObj);
	}
	
	//
	// manual port
	// C++:  bool detect(vpImage_char I, double tagSize, vpCameraParameters cam, vector_vpHomogeneousMatrix cMo_vec)
	//

	//javadoc: VpDetectorAprilTag::detect(I, tagSize, cam, cMo_vec_list_arr)

	public java.util.List<org.visp.core.VpHomogeneousMatrix> detect(org.visp.core.VpImageUChar I, double tagSize, org.visp.core.VpCameraParameters cam)
	{
	    long[] arr = detect_0(nativeObj, I.nativeObj, tagSize, cam.nativeObj);
	    return org.visp.utils.Converters.Array_to_vector_vpHomogeneousMatrix(arr);
	}


	//
	// manual port
	// C++:  bool detect(vpImage_char I)
	//

	//javadoc: VpDetectorAprilTag::detect(I)

	public boolean detect(org.visp.core.VpImageUChar I)

	{

	    boolean retVal = detect_1(nativeObj, I.nativeObj);
	    return retVal;
	}
	
	//
	// manual port
	// C++: void setAprilTagPoseEstimationMethod(const vpPoseEstimationMethod &poseEstimationMethod)
	//
	//javadoc: VpDetectorAprilTag::setAprilTagPoseEstimationMethod(int vpPoseEstimationMethod)

	public void setAprilTagPoseEstimationMethod(int vpPoseEstimationMethod)
	{
	   setAprilTagPoseEstimationMethod(nativeObj,vpPoseEstimationMethod);
	}
	
	//
	// C++:   vpDetectorAprilTag(vpAprilTagFamily tagFamily = TAG_36h11, vpPoseEstimationMethod poseEstimationMethod = HOMOGRAPHY_VIRTUAL_VS)
	//

	//javadoc: VpDetectorAprilTag::VpDetectorAprilTag()

	public   VpDetectorAprilTag()
	{

	    nativeObj = VpDetectorAprilTag_0();

	    return;
	}
	
    @Override
    protected void finalize() throws Throwable {
        delete(nativeObj);
    }
                


    // C++:  bool getPose(size_t tagIndex, double tagSize, vpCameraParameters cam, vpHomogeneousMatrix cMo)
    private static native boolean getPose_0(long nativeObj, long tagIndex, double tagSize, long cam_nativeObj, long cMo_nativeObj);

    // C++:  void setAprilTagNbThreads(int nThreads)
    private static native void setAprilTagNbThreads_0(long nativeObj, int nThreads);

    // C++:  void setAprilTagQuadDecimate(float quadDecimate)
    private static native void setAprilTagQuadDecimate_0(long nativeObj, float quadDecimate);

    // C++:  void setAprilTagQuadSigma(float quadSigma)
    private static native void setAprilTagQuadSigma_0(long nativeObj, float quadSigma);

    // C++:  void setAprilTagRefineDecode(bool refineDecode)
    private static native void setAprilTagRefineDecode_0(long nativeObj, boolean refineDecode);

    // C++:  void setAprilTagRefineEdges(bool refineEdges)
    private static native void setAprilTagRefineEdges_0(long nativeObj, boolean refineEdges);

    // C++:  void setAprilTagRefinePose(bool refinePose)
    private static native void setAprilTagRefinePose_0(long nativeObj, boolean refinePose);

    // C++:  void setDisplayTag(bool display, vpColor color = vpColor::none, int thickness = 2)
    private static native void setDisplayTag_0(long nativeObj, boolean display, int thickness);
    private static native void setDisplayTag_1(long nativeObj, boolean display);

	// C++: vpPoseEstimationMethod getPoseEstimationMethod()
	private static native int getPoseEstimationMethod(long address);
	
	// C++:  bool detect(vpImage_char I, double tagSize, vpCameraParameters cam, vector_vpHomogeneousMatrix cMo_vec)
	private static native long[] detect_0(long nativeObj, long I_nativeObj, double tagSize, long cam_nativeObj);

	// C++:  bool detect(vpImage_char I)
	private static native boolean detect_1(long nativeObj, long I_nativeObj);
	
	// C++: void setAprilTagPoseEstimationMethod(const vpPoseEstimationMethod &poseEstimationMethod)
	private static native void setAprilTagPoseEstimationMethod(long address, int value);
	
	// C++:   vpDetectorAprilTag(vpAprilTagFamily tagFamily = TAG_36h11, vpPoseEstimationMethod poseEstimationMethod = HOMOGRAPHY_VIRTUAL_VS)
	private static native long VpDetectorAprilTag_0();
	
    // native support for java finalize()
    private static native void delete(long nativeObj);
                
}
