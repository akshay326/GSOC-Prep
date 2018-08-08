//
// This file is auto-generated. Please don't modify it!
//
package org.visp.core;

import org.visp.core.VpCameraParameters;
import org.visp.core.VpColVector;
import org.visp.core.VpHomogeneousMatrix;
import org.visp.core.VpImageRGBa;
import org.visp.core.VpImageUChar;

// C++: class VpPoint
//javadoc: VpPoint

public class VpPoint {

    public final long nativeObj;
    public VpPoint(long addr) { nativeObj = addr; }

    public long getNativeObjAddr() { return nativeObj; }

    // internal usage only
    public static VpPoint __fromPtr__(long addr) { return new VpPoint(addr); }

    //
    // C++:   vpPoint(double oX, double oY, double oZ)
    //

    //javadoc: VpPoint::VpPoint(oX, oY, oZ)

    public   VpPoint(double oX, double oY, double oZ)
    {
        
        nativeObj = VpPoint_0(oX, oY, oZ);
        
        return;
    }
                
    //
    // C++:   vpPoint(vector_double P)
    //

    //javadoc: VpPoint::VpPoint(P)

    public   VpPoint(double[] P)
    {
        
        nativeObj = VpPoint_1(P);
        
        return;
    }
                
    //
    // C++:   vpPoint(vpColVector P)
    //

    //javadoc: VpPoint::VpPoint(P)

    public   VpPoint(VpColVector P)
    {
        
        nativeObj = VpPoint_2(P.nativeObj);
        
        return;
    }
                
    //
    // C++:   vpPoint()
    //

    //javadoc: VpPoint::VpPoint()

    public   VpPoint()
    {
        
        nativeObj = VpPoint_3();
        
        return;
    }
                
    //
    // C++:  double get_W()
    //

    //javadoc: VpPoint::get_W()

    public  double get_W()
    {
        
        double retVal = get_W_0(nativeObj);
        
        return retVal;
    }
                
    //
    // C++:  double get_X()
    //

    //javadoc: VpPoint::get_X()

    public  double get_X()
    {
        
        double retVal = get_X_0(nativeObj);
        
        return retVal;
    }
                
    //
    // C++:  double get_Y()
    //

    //javadoc: VpPoint::get_Y()

    public  double get_Y()
    {
        
        double retVal = get_Y_0(nativeObj);
        
        return retVal;
    }
                
    //
    // C++:  double get_Z()
    //

    //javadoc: VpPoint::get_Z()

    public  double get_Z()
    {
        
        double retVal = get_Z_0(nativeObj);
        
        return retVal;
    }
                
    //
    // C++:  double get_oW()
    //

    //javadoc: VpPoint::get_oW()

    public  double get_oW()
    {
        
        double retVal = get_oW_0(nativeObj);
        
        return retVal;
    }
                
    //
    // C++:  double get_oX()
    //

    //javadoc: VpPoint::get_oX()

    public  double get_oX()
    {
        
        double retVal = get_oX_0(nativeObj);
        
        return retVal;
    }
                
    //
    // C++:  double get_oY()
    //

    //javadoc: VpPoint::get_oY()

    public  double get_oY()
    {
        
        double retVal = get_oY_0(nativeObj);
        
        return retVal;
    }
                
    //
    // C++:  double get_oZ()
    //

    //javadoc: VpPoint::get_oZ()

    public  double get_oZ()
    {
        
        double retVal = get_oZ_0(nativeObj);
        
        return retVal;
    }
                
    //
    // C++:  double get_w()
    //

    //javadoc: VpPoint::get_w()

    public  double get_w()
    {
        
        double retVal = get_w_0(nativeObj);
        
        return retVal;
    }
                
    //
    // C++:  double get_x()
    //

    //javadoc: VpPoint::get_x()

    public  double get_x()
    {
        
        double retVal = get_x_0(nativeObj);
        
        return retVal;
    }
                
    //
    // C++:  double get_y()
    //

    //javadoc: VpPoint::get_y()

    public  double get_y()
    {
        
        double retVal = get_y_0(nativeObj);
        
        return retVal;
    }
                
    //
    // C++:  void changeFrame(vpHomogeneousMatrix cMo, vpColVector _cP)
    //

    //javadoc: VpPoint::changeFrame(cMo, _cP)

    public  void changeFrame(VpHomogeneousMatrix cMo, VpColVector _cP)
    {
        
        changeFrame_0(nativeObj, cMo.nativeObj, _cP.nativeObj);
        
        return;
    }
                
    //
    // C++:  void changeFrame(vpHomogeneousMatrix cMo)
    //

    //javadoc: VpPoint::changeFrame(cMo)

    public  void changeFrame(VpHomogeneousMatrix cMo)
    {
        
        changeFrame_1(nativeObj, cMo.nativeObj);
        
        return;
    }
                
    //
    // C++:  void display(vpImage_char I, vpCameraParameters cam, vpColor color = vpColor::green, int thickness = 1)
    //

    //javadoc: VpPoint::display(I, cam, thickness)

    public  void display(VpImageUChar I, VpCameraParameters cam, int thickness)
    {
        
        display_0(nativeObj, I.nativeObj, cam.nativeObj, thickness);
        
        return;
    }
                    //javadoc: VpPoint::display(I, cam)

    public  void display(VpImageUChar I, VpCameraParameters cam)
    {
        
        display_1(nativeObj, I.nativeObj, cam.nativeObj);
        
        return;
    }
                
    //
    // C++:  void display(vpImage_char I, vpHomogeneousMatrix cMo, vpCameraParameters cam, vpColor color = vpColor::green, int thickness = 1)
    //

    //javadoc: VpPoint::display(I, cMo, cam, thickness)

    public  void display(VpImageUChar I, VpHomogeneousMatrix cMo, VpCameraParameters cam, int thickness)
    {
        
        display_2(nativeObj, I.nativeObj, cMo.nativeObj, cam.nativeObj, thickness);
        
        return;
    }
                    //javadoc: VpPoint::display(I, cMo, cam)

    public  void display(VpImageUChar I, VpHomogeneousMatrix cMo, VpCameraParameters cam)
    {
        
        display_3(nativeObj, I.nativeObj, cMo.nativeObj, cam.nativeObj);
        
        return;
    }
                
    //
    // C++:  void display(vpImage_vpRGBa I, vpHomogeneousMatrix cMo, vpCameraParameters cam, vpColor color = vpColor::green, int thickness = 1)
    //

    //javadoc: VpPoint::display(I, cMo, cam, thickness)

    public  void display(VpImageRGBa I, VpHomogeneousMatrix cMo, VpCameraParameters cam, int thickness)
    {
        
        display_4(nativeObj, I.nativeObj, cMo.nativeObj, cam.nativeObj, thickness);
        
        return;
    }
                    //javadoc: VpPoint::display(I, cMo, cam)

    public  void display(VpImageRGBa I, VpHomogeneousMatrix cMo, VpCameraParameters cam)
    {
        
        display_5(nativeObj, I.nativeObj, cMo.nativeObj, cam.nativeObj);
        
        return;
    }
                
    //
    // C++:  void init()
    //

    //javadoc: VpPoint::init()

    public  void init()
    {
        
        init_0(nativeObj);
        
        return;
    }
                
    //
    // C++:  void projection(vpColVector _cP, vpColVector _p)
    //

    //javadoc: VpPoint::projection(_cP, _p)

    public  void projection(VpColVector _cP, VpColVector _p)
    {
        
        projection_0(nativeObj, _cP.nativeObj, _p.nativeObj);
        
        return;
    }
                
    //
    // C++:  void projection()
    //

    //javadoc: VpPoint::projection()

    public  void projection()
    {
        
        projection_1(nativeObj);
        
        return;
    }
                
    //
    // C++:  void setWorldCoordinates(double oX, double oY, double oZ)
    //

    //javadoc: VpPoint::setWorldCoordinates(oX, oY, oZ)

    public  void setWorldCoordinates(double oX, double oY, double oZ)
    {
        
        setWorldCoordinates_0(nativeObj, oX, oY, oZ);
        
        return;
    }
                
    //
    // C++:  void setWorldCoordinates(vector_double P)
    //

    //javadoc: VpPoint::setWorldCoordinates(P)

    public  void setWorldCoordinates(double[] P)
    {
        
        setWorldCoordinates_1(nativeObj, P);
        
        return;
    }
                
    //
    // C++:  void setWorldCoordinates(vpColVector P)
    //

    //javadoc: VpPoint::setWorldCoordinates(P)

    public  void setWorldCoordinates(VpColVector P)
    {
        
        setWorldCoordinates_2(nativeObj, P.nativeObj);
        
        return;
    }
                
    //
    // C++:  void set_W(double W)
    //

    //javadoc: VpPoint::set_W(W)

    public  void set_W(double W)
    {
        
        set_W_0(nativeObj, W);
        
        return;
    }
                
    //
    // C++:  void set_X(double X)
    //

    //javadoc: VpPoint::set_X(X)

    public  void set_X(double X)
    {
        
        set_X_0(nativeObj, X);
        
        return;
    }
                
    //
    // C++:  void set_Y(double Y)
    //

    //javadoc: VpPoint::set_Y(Y)

    public  void set_Y(double Y)
    {
        
        set_Y_0(nativeObj, Y);
        
        return;
    }
                
    //
    // C++:  void set_Z(double Z)
    //

    //javadoc: VpPoint::set_Z(Z)

    public  void set_Z(double Z)
    {
        
        set_Z_0(nativeObj, Z);
        
        return;
    }
                
    //
    // C++:  void set_oW(double oW)
    //

    //javadoc: VpPoint::set_oW(oW)

    public  void set_oW(double oW)
    {
        
        set_oW_0(nativeObj, oW);
        
        return;
    }
                
    //
    // C++:  void set_oX(double oX)
    //

    //javadoc: VpPoint::set_oX(oX)

    public  void set_oX(double oX)
    {
        
        set_oX_0(nativeObj, oX);
        
        return;
    }
                
    //
    // C++:  void set_oY(double oY)
    //

    //javadoc: VpPoint::set_oY(oY)

    public  void set_oY(double oY)
    {
        
        set_oY_0(nativeObj, oY);
        
        return;
    }
                
    //
    // C++:  void set_oZ(double oZ)
    //

    //javadoc: VpPoint::set_oZ(oZ)

    public  void set_oZ(double oZ)
    {
        
        set_oZ_0(nativeObj, oZ);
        
        return;
    }
                
    //
    // C++:  void set_w(double w)
    //

    //javadoc: VpPoint::set_w(w)

    public  void set_w(double w)
    {
        
        set_w_0(nativeObj, w);
        
        return;
    }
                
    //
    // C++:  void set_x(double x)
    //

    //javadoc: VpPoint::set_x(x)

    public  void set_x(double x)
    {
        
        set_x_0(nativeObj, x);
        
        return;
    }
                
    //
    // C++:  void set_y(double y)
    //

    //javadoc: VpPoint::set_y(y)

    public  void set_y(double y)
    {
        
        set_y_0(nativeObj, y);
        
        return;
    }
                
    //
    // C++:  vpPoint* duplicate()
    //

    // Return type 'vpPoint*' is not supported, skipping the function


	//
	// C++:  vpColVector getWorldCoordinates()
	//

	//javadoc: VpPoint::getWorldCoordinates()

	public  VpColVector getWorldCoordinates()
	{
	    VpColVector retVal = new VpColVector(getWorldCoordinates_2(nativeObj));
	    return retVal;
	}
	
    @Override
    public String toString(){
        return toString(nativeObj);
    }
                
    @Override
    protected void finalize() throws Throwable {
        delete(nativeObj);
    }
                


    // C++:   vpPoint(double oX, double oY, double oZ)
    private static native long VpPoint_0(double oX, double oY, double oZ);

    // C++:   vpPoint(vector_double P)
    private static native long VpPoint_1(double[] P);

    // C++:   vpPoint(vpColVector P)
    private static native long VpPoint_2(long P_nativeObj);

    // C++:   vpPoint()
    private static native long VpPoint_3();

    // C++:  double get_W()
    private static native double get_W_0(long nativeObj);

    // C++:  double get_X()
    private static native double get_X_0(long nativeObj);

    // C++:  double get_Y()
    private static native double get_Y_0(long nativeObj);

    // C++:  double get_Z()
    private static native double get_Z_0(long nativeObj);

    // C++:  double get_oW()
    private static native double get_oW_0(long nativeObj);

    // C++:  double get_oX()
    private static native double get_oX_0(long nativeObj);

    // C++:  double get_oY()
    private static native double get_oY_0(long nativeObj);

    // C++:  double get_oZ()
    private static native double get_oZ_0(long nativeObj);

    // C++:  double get_w()
    private static native double get_w_0(long nativeObj);

    // C++:  double get_x()
    private static native double get_x_0(long nativeObj);

    // C++:  double get_y()
    private static native double get_y_0(long nativeObj);

    // C++:  void changeFrame(vpHomogeneousMatrix cMo, vpColVector _cP)
    private static native void changeFrame_0(long nativeObj, long cMo_nativeObj, long _cP_nativeObj);

    // C++:  void changeFrame(vpHomogeneousMatrix cMo)
    private static native void changeFrame_1(long nativeObj, long cMo_nativeObj);

    // C++:  void display(vpImage_char I, vpCameraParameters cam, vpColor color = vpColor::green, int thickness = 1)
    private static native void display_0(long nativeObj, long I_nativeObj, long cam_nativeObj, int thickness);
    private static native void display_1(long nativeObj, long I_nativeObj, long cam_nativeObj);

    // C++:  void display(vpImage_char I, vpHomogeneousMatrix cMo, vpCameraParameters cam, vpColor color = vpColor::green, int thickness = 1)
    private static native void display_2(long nativeObj, long I_nativeObj, long cMo_nativeObj, long cam_nativeObj, int thickness);
    private static native void display_3(long nativeObj, long I_nativeObj, long cMo_nativeObj, long cam_nativeObj);

    // C++:  void display(vpImage_vpRGBa I, vpHomogeneousMatrix cMo, vpCameraParameters cam, vpColor color = vpColor::green, int thickness = 1)
    private static native void display_4(long nativeObj, long I_nativeObj, long cMo_nativeObj, long cam_nativeObj, int thickness);
    private static native void display_5(long nativeObj, long I_nativeObj, long cMo_nativeObj, long cam_nativeObj);

    // C++:  void init()
    private static native void init_0(long nativeObj);

    // C++:  void projection(vpColVector _cP, vpColVector _p)
    private static native void projection_0(long nativeObj, long _cP_nativeObj, long _p_nativeObj);

    // C++:  void projection()
    private static native void projection_1(long nativeObj);

    // C++:  void setWorldCoordinates(double oX, double oY, double oZ)
    private static native void setWorldCoordinates_0(long nativeObj, double oX, double oY, double oZ);

    // C++:  void setWorldCoordinates(vector_double P)
    private static native void setWorldCoordinates_1(long nativeObj, double[] P);

    // C++:  void setWorldCoordinates(vpColVector P)
    private static native void setWorldCoordinates_2(long nativeObj, long P_nativeObj);

    // C++:  void set_W(double W)
    private static native void set_W_0(long nativeObj, double W);

    // C++:  void set_X(double X)
    private static native void set_X_0(long nativeObj, double X);

    // C++:  void set_Y(double Y)
    private static native void set_Y_0(long nativeObj, double Y);

    // C++:  void set_Z(double Z)
    private static native void set_Z_0(long nativeObj, double Z);

    // C++:  void set_oW(double oW)
    private static native void set_oW_0(long nativeObj, double oW);

    // C++:  void set_oX(double oX)
    private static native void set_oX_0(long nativeObj, double oX);

    // C++:  void set_oY(double oY)
    private static native void set_oY_0(long nativeObj, double oY);

    // C++:  void set_oZ(double oZ)
    private static native void set_oZ_0(long nativeObj, double oZ);

    // C++:  void set_w(double w)
    private static native void set_w_0(long nativeObj, double w);

    // C++:  void set_x(double x)
    private static native void set_x_0(long nativeObj, double x);

    // C++:  void set_y(double y)
    private static native void set_y_0(long nativeObj, double y);

	// C++:  vpColVector getWorldCoordinates()
	private static native long getWorldCoordinates_2(long nativeObj);
	
    // native support for java toString()
    private static native String toString(long nativeObj);
                
    // native support for java finalize()
    private static native void delete(long nativeObj);
                
}
