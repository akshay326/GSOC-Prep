//
// This file is auto-generated. Please don't modify it!
//
package org.visp.core;

import org.visp.core.VpMatrix;

// C++: class VpCameraParameters
//javadoc: VpCameraParameters

public class VpCameraParameters {

    protected final long nativeObj;
    protected VpCameraParameters(long addr) { nativeObj = addr; }

    public long getNativeObjAddr() { return nativeObj; }

    // internal usage only
    public static VpCameraParameters __fromPtr__(long addr) { return new VpCameraParameters(addr); }

    //
    // C++:   vpCameraParameters(double px, double py, double u0, double v0, double kud, double kdu)
    //

    //javadoc: VpCameraParameters::VpCameraParameters(px, py, u0, v0, kud, kdu)
    public   VpCameraParameters(double px, double py, double u0, double v0, double kud, double kdu)
    {
        
        nativeObj = VpCameraParameters_0(px, py, u0, v0, kud, kdu);
        
        return;
    }


    //
    // C++:   vpCameraParameters(double px, double py, double u0, double v0)
    //

    //javadoc: VpCameraParameters::VpCameraParameters(px, py, u0, v0)
    public   VpCameraParameters(double px, double py, double u0, double v0)
    {
        
        nativeObj = VpCameraParameters_1(px, py, u0, v0);
        
        return;
    }


    //
    // C++:   vpCameraParameters(vpCameraParameters c)
    //

    // Unknown type 'vpCameraParameters' (I), skipping the function


    //
    // C++:   vpCameraParameters()
    //

    //javadoc: VpCameraParameters::VpCameraParameters()
    public   VpCameraParameters()
    {
        
        nativeObj = VpCameraParameters_2();
        
        return;
    }


    //
    // C++:  bool isFovComputed()
    //

    //javadoc: VpCameraParameters::isFovComputed()
    public  boolean isFovComputed()
    {
        
        boolean retVal = isFovComputed_0(nativeObj);
        
        return retVal;
    }


    //
    // C++:  double getHorizontalFovAngle()
    //

    //javadoc: VpCameraParameters::getHorizontalFovAngle()
    public  double getHorizontalFovAngle()
    {
        
        double retVal = getHorizontalFovAngle_0(nativeObj);
        
        return retVal;
    }


    //
    // C++:  double getVerticalFovAngle()
    //

    //javadoc: VpCameraParameters::getVerticalFovAngle()
    public  double getVerticalFovAngle()
    {
        
        double retVal = getVerticalFovAngle_0(nativeObj);
        
        return retVal;
    }


    //
    // C++:  double get_kdu()
    //

    //javadoc: VpCameraParameters::get_kdu()
    public  double get_kdu()
    {
        
        double retVal = get_kdu_0(nativeObj);
        
        return retVal;
    }


    //
    // C++:  double get_kud()
    //

    //javadoc: VpCameraParameters::get_kud()
    public  double get_kud()
    {
        
        double retVal = get_kud_0(nativeObj);
        
        return retVal;
    }


    //
    // C++:  double get_px()
    //

    //javadoc: VpCameraParameters::get_px()
    public  double get_px()
    {
        
        double retVal = get_px_0(nativeObj);
        
        return retVal;
    }


    //
    // C++:  double get_px_inverse()
    //

    //javadoc: VpCameraParameters::get_px_inverse()
    public  double get_px_inverse()
    {
        
        double retVal = get_px_inverse_0(nativeObj);
        
        return retVal;
    }


    //
    // C++:  double get_py()
    //

    //javadoc: VpCameraParameters::get_py()
    public  double get_py()
    {
        
        double retVal = get_py_0(nativeObj);
        
        return retVal;
    }


    //
    // C++:  double get_py_inverse()
    //

    //javadoc: VpCameraParameters::get_py_inverse()
    public  double get_py_inverse()
    {
        
        double retVal = get_py_inverse_0(nativeObj);
        
        return retVal;
    }


    //
    // C++:  double get_u0()
    //

    //javadoc: VpCameraParameters::get_u0()
    public  double get_u0()
    {
        
        double retVal = get_u0_0(nativeObj);
        
        return retVal;
    }


    //
    // C++:  double get_v0()
    //

    //javadoc: VpCameraParameters::get_v0()
    public  double get_v0()
    {
        
        double retVal = get_v0_0(nativeObj);
        
        return retVal;
    }


    //
    // C++:  vector_vpColVector getFovNormals()
    //

    // Return type 'vector_vpColVector' is not supported, skipping the function


    //
    // C++:  void computeFov(int w, int h)
    //

    //javadoc: VpCameraParameters::computeFov(w, h)
    public  void computeFov(int w, int h)
    {
        
        computeFov_0(nativeObj, w, h);
        
        return;
    }


    //
    // C++:  void init(vpCameraParameters c)
    //

    // Unknown type 'vpCameraParameters' (I), skipping the function


    //
    // C++:  void init()
    //

    //javadoc: VpCameraParameters::init()
    public  void init()
    {
        
        init_0(nativeObj);
        
        return;
    }


    //
    // C++:  void initFromCalibrationMatrix(vpMatrix _K)
    //

    //javadoc: VpCameraParameters::initFromCalibrationMatrix(_K)
    public  void initFromCalibrationMatrix(VpMatrix _K)
    {
        
        initFromCalibrationMatrix_0(nativeObj, _K.nativeObj);
        
        return;
    }


    //
    // C++:  void initFromFov(int w, int h, double hfov, double vfov)
    //

    //javadoc: VpCameraParameters::initFromFov(w, h, hfov, vfov)
    public  void initFromFov(int w, int h, double hfov, double vfov)
    {
        
        initFromFov_0(nativeObj, w, h, hfov, vfov);
        
        return;
    }


    //
    // C++:  void initPersProjWithDistortion(double px, double py, double u0, double v0, double kud, double kdu)
    //

    //javadoc: VpCameraParameters::initPersProjWithDistortion(px, py, u0, v0, kud, kdu)
    public  void initPersProjWithDistortion(double px, double py, double u0, double v0, double kud, double kdu)
    {
        
        initPersProjWithDistortion_0(nativeObj, px, py, u0, v0, kud, kdu);
        
        return;
    }


    //
    // C++:  void initPersProjWithoutDistortion(double px, double py, double u0, double v0)
    //

    //javadoc: VpCameraParameters::initPersProjWithoutDistortion(px, py, u0, v0)
    public  void initPersProjWithoutDistortion(double px, double py, double u0, double v0)
    {
        
        initPersProjWithoutDistortion_0(nativeObj, px, py, u0, v0);
        
        return;
    }


    //
    // C++:  void printParameters()
    //

    //javadoc: VpCameraParameters::printParameters()
    public  void printParameters()
    {
        
        printParameters_0(nativeObj);
        
        return;
    }


    //
    // C++:  vpCameraParametersProjType get_projModel()
    //

    // Return type 'vpCameraParametersProjType' is not supported, skipping the function


    //
    // C++:  vpMatrix get_K()
    //

    //javadoc: VpCameraParameters::get_K()
    public  VpMatrix get_K()
    {
        
        VpMatrix retVal = new VpMatrix(get_K_0(nativeObj));
        
        return retVal;
    }


    //
    // C++:  vpMatrix get_K_inverse()
    //

    //javadoc: VpCameraParameters::get_K_inverse()
    public  VpMatrix get_K_inverse()
    {
        
        VpMatrix retVal = new VpMatrix(get_K_inverse_0(nativeObj));
        
        return retVal;
    }


    @Override
    protected void finalize() throws Throwable {
        delete(nativeObj);
    }



    // C++:   vpCameraParameters(double px, double py, double u0, double v0, double kud, double kdu)
    private static native long VpCameraParameters_0(double px, double py, double u0, double v0, double kud, double kdu);

    // C++:   vpCameraParameters(double px, double py, double u0, double v0)
    private static native long VpCameraParameters_1(double px, double py, double u0, double v0);

    // C++:   vpCameraParameters()
    private static native long VpCameraParameters_2();

    // C++:  bool isFovComputed()
    private static native boolean isFovComputed_0(long nativeObj);

    // C++:  double getHorizontalFovAngle()
    private static native double getHorizontalFovAngle_0(long nativeObj);

    // C++:  double getVerticalFovAngle()
    private static native double getVerticalFovAngle_0(long nativeObj);

    // C++:  double get_kdu()
    private static native double get_kdu_0(long nativeObj);

    // C++:  double get_kud()
    private static native double get_kud_0(long nativeObj);

    // C++:  double get_px()
    private static native double get_px_0(long nativeObj);

    // C++:  double get_px_inverse()
    private static native double get_px_inverse_0(long nativeObj);

    // C++:  double get_py()
    private static native double get_py_0(long nativeObj);

    // C++:  double get_py_inverse()
    private static native double get_py_inverse_0(long nativeObj);

    // C++:  double get_u0()
    private static native double get_u0_0(long nativeObj);

    // C++:  double get_v0()
    private static native double get_v0_0(long nativeObj);

    // C++:  void computeFov(int w, int h)
    private static native void computeFov_0(long nativeObj, int w, int h);

    // C++:  void init()
    private static native void init_0(long nativeObj);

    // C++:  void initFromCalibrationMatrix(vpMatrix _K)
    private static native void initFromCalibrationMatrix_0(long nativeObj, long _K_nativeObj);

    // C++:  void initFromFov(int w, int h, double hfov, double vfov)
    private static native void initFromFov_0(long nativeObj, int w, int h, double hfov, double vfov);

    // C++:  void initPersProjWithDistortion(double px, double py, double u0, double v0, double kud, double kdu)
    private static native void initPersProjWithDistortion_0(long nativeObj, double px, double py, double u0, double v0, double kud, double kdu);

    // C++:  void initPersProjWithoutDistortion(double px, double py, double u0, double v0)
    private static native void initPersProjWithoutDistortion_0(long nativeObj, double px, double py, double u0, double v0);

    // C++:  void printParameters()
    private static native void printParameters_0(long nativeObj);

    // C++:  vpMatrix get_K()
    private static native long get_K_0(long nativeObj);

    // C++:  vpMatrix get_K_inverse()
    private static native long get_K_inverse_0(long nativeObj);

    // native support for java finalize()
    private static native void delete(long nativeObj);

}
