//
// This file is auto-generated. Please don't modify it!
//
package org.visp.core;

import java.util.ArrayList;
import java.util.List;
import org.visp.core.VpColVector;
import org.visp.core.VpHomogeneousMatrix;
import org.visp.utils.Converters;

// C++: class VpHomogeneousMatrix
//javadoc: VpHomogeneousMatrix

public class VpHomogeneousMatrix {

    public final long nativeObj;
    public VpHomogeneousMatrix(long addr) { nativeObj = addr; }

    public long getNativeObjAddr() { return nativeObj; }

    // internal usage only
    public static VpHomogeneousMatrix __fromPtr__(long addr) { return new VpHomogeneousMatrix(addr); }

    //
    // C++:   vpHomogeneousMatrix(double tx, double ty, double tz, double tux, double tuy, double tuz)
    //

    //javadoc: VpHomogeneousMatrix::VpHomogeneousMatrix(tx, ty, tz, tux, tuy, tuz)

    public   VpHomogeneousMatrix(double tx, double ty, double tz, double tux, double tuy, double tuz)
    {
        
        nativeObj = VpHomogeneousMatrix_0(tx, ty, tz, tux, tuy, tuz);
        
        return;
    }
                
    //
    // C++:   vpHomogeneousMatrix(vector_double v)
    //

    //javadoc: VpHomogeneousMatrix::VpHomogeneousMatrix(v)

    public   VpHomogeneousMatrix(double[] v)
    {
        
        nativeObj = VpHomogeneousMatrix_1(v);
        
        return;
    }
                
    //
    // C++:   vpHomogeneousMatrix(vector_float v)
    //

    //javadoc: VpHomogeneousMatrix::VpHomogeneousMatrix(v)

    public   VpHomogeneousMatrix(float[] v)
    {
        
        nativeObj = VpHomogeneousMatrix_2(v);
        
        return;
    }
                
    //
    // C++:   vpHomogeneousMatrix(vpHomogeneousMatrix M)
    //

    //javadoc: VpHomogeneousMatrix::VpHomogeneousMatrix(M)

    public   VpHomogeneousMatrix(VpHomogeneousMatrix M)
    {
        
        nativeObj = VpHomogeneousMatrix_3(M.nativeObj);
        
        return;
    }
                
    //
    // C++:   vpHomogeneousMatrix(vpPoseVector p)
    //

    // Unknown type 'vpPoseVector' (I), skipping the function


    //
    // C++:   vpHomogeneousMatrix(vpTranslationVector t, vpQuaternionVector q)
    //

    // Unknown type 'vpTranslationVector' (I), skipping the function


    //
    // C++:   vpHomogeneousMatrix(vpTranslationVector t, vpRotationMatrix R)
    //

    // Unknown type 'vpTranslationVector' (I), skipping the function


    //
    // C++:   vpHomogeneousMatrix(vpTranslationVector t, vpThetaUVector tu)
    //

    // Unknown type 'vpTranslationVector' (I), skipping the function


    //
    // C++:   vpHomogeneousMatrix()
    //

    //javadoc: VpHomogeneousMatrix::VpHomogeneousMatrix()

    public   VpHomogeneousMatrix()
    {
        
        nativeObj = VpHomogeneousMatrix_4();
        
        return;
    }
                
    //
    // C++:  bool isAnHomogeneousMatrix()
    //

    //javadoc: VpHomogeneousMatrix::isAnHomogeneousMatrix()

    public  boolean isAnHomogeneousMatrix()
    {
        
        boolean retVal = isAnHomogeneousMatrix_0(nativeObj);
        
        return retVal;
    }
                
    //
    // C++:  void buildFrom(double tx, double ty, double tz, double tux, double tuy, double tuz)
    //

    //javadoc: VpHomogeneousMatrix::buildFrom(tx, ty, tz, tux, tuy, tuz)

    public  void buildFrom(double tx, double ty, double tz, double tux, double tuy, double tuz)
    {
        
        buildFrom_0(nativeObj, tx, ty, tz, tux, tuy, tuz);
        
        return;
    }
                
    //
    // C++:  void buildFrom(vector_double v)
    //

    //javadoc: VpHomogeneousMatrix::buildFrom(v)

    public  void buildFrom(double[] v)
    {
        
        buildFrom_1(nativeObj, v);
        
        return;
    }
                
    //
    // C++:  void buildFrom(vector_float v)
    //

    //javadoc: VpHomogeneousMatrix::buildFrom(v)

    public  void buildFrom(float[] v)
    {
        
        buildFrom_2(nativeObj, v);
        
        return;
    }
                
    //
    // C++:  void buildFrom(vpPoseVector p)
    //

    // Unknown type 'vpPoseVector' (I), skipping the function


    //
    // C++:  void buildFrom(vpTranslationVector t, vpQuaternionVector q)
    //

    // Unknown type 'vpTranslationVector' (I), skipping the function


    //
    // C++:  void buildFrom(vpTranslationVector t, vpRotationMatrix R)
    //

    // Unknown type 'vpTranslationVector' (I), skipping the function


    //
    // C++:  void buildFrom(vpTranslationVector t, vpThetaUVector tu)
    //

    // Unknown type 'vpTranslationVector' (I), skipping the function


    //
    // C++:  void convert(vector_double M)
    //

    //javadoc: VpHomogeneousMatrix::convert(M)

    public  void convert(double[] M)
    {
        
        convert_0(nativeObj, M);
        
        return;
    }
                
    //
    // C++:  void convert(vector_float M)
    //

    //javadoc: VpHomogeneousMatrix::convert(M)

    public  void convert(float[] M)
    {
        
        convert_1(nativeObj, M);
        
        return;
    }
                
    //
    // C++:  void extract(vpQuaternionVector q)
    //

    // Unknown type 'vpQuaternionVector' (I), skipping the function


    //
    // C++:  void extract(vpRotationMatrix R)
    //

    // Unknown type 'vpRotationMatrix' (I), skipping the function


    //
    // C++:  void extract(vpThetaUVector tu)
    //

    // Unknown type 'vpThetaUVector' (I), skipping the function


    //
    // C++:  void extract(vpTranslationVector t)
    //

    // Unknown type 'vpTranslationVector' (I), skipping the function


    //
    // C++:  void eye()
    //

    //javadoc: VpHomogeneousMatrix::eye()

    public  void eye()
    {
        
        eye_0(nativeObj);
        
        return;
    }
                
    //
    // C++:  void insert(vpQuaternionVector t)
    //

    // Unknown type 'vpQuaternionVector' (I), skipping the function


    //
    // C++:  void insert(vpRotationMatrix R)
    //

    // Unknown type 'vpRotationMatrix' (I), skipping the function


    //
    // C++:  void insert(vpThetaUVector tu)
    //

    // Unknown type 'vpThetaUVector' (I), skipping the function


    //
    // C++:  void insert(vpTranslationVector t)
    //

    // Unknown type 'vpTranslationVector' (I), skipping the function


    //
    // C++:  void inverse(vpHomogeneousMatrix Mi)
    //

    //javadoc: VpHomogeneousMatrix::inverse(Mi)

    public  void inverse(VpHomogeneousMatrix Mi)
    {
        
        inverse_0(nativeObj, Mi.nativeObj);
        
        return;
    }
                
    //
    // C++:  void load(ifstream f)
    //

    // Unknown type 'ifstream' (I), skipping the function


    //
    // C++:  void print()
    //

    //javadoc: VpHomogeneousMatrix::print()

    public  void print()
    {
        
        print_0(nativeObj);
        
        return;
    }
                
    //
    // C++:  void resize(int nrows, int ncols, bool flagNullify = true)
    //

    //javadoc: VpHomogeneousMatrix::resize(nrows, ncols, flagNullify)

    public  void resize(int nrows, int ncols, boolean flagNullify)
    {
        
        resize_0(nativeObj, nrows, ncols, flagNullify);
        
        return;
    }
                    //javadoc: VpHomogeneousMatrix::resize(nrows, ncols)

    public  void resize(int nrows, int ncols)
    {
        
        resize_1(nativeObj, nrows, ncols);
        
        return;
    }
                
    //
    // C++:  void save(ofstream f)
    //

    // Unknown type 'ofstream' (I), skipping the function


    //
    // C++:  vpColVector getCol(int j)
    //

    //javadoc: VpHomogeneousMatrix::getCol(j)

    public  VpColVector getCol(int j)
    {
        
        VpColVector retVal = new VpColVector(getCol_0(nativeObj, j));
        
        return retVal;
    }
                
    //
    // C++:  vpHomogeneousMatrix inverse()
    //

    //javadoc: VpHomogeneousMatrix::inverse()

    public  VpHomogeneousMatrix inverse()
    {
        
        VpHomogeneousMatrix retVal = new VpHomogeneousMatrix(inverse_1(nativeObj));
        
        return retVal;
    }
                
    //
    // C++: static vpHomogeneousMatrix mean(vector_vpHomogeneousMatrix vec_M)
    //

    //javadoc: VpHomogeneousMatrix::mean(vec_M_list_arr)

    public static VpHomogeneousMatrix mean(List<VpHomogeneousMatrix> vec_M_list_arr)
    {
        long[] vec_M = Converters.vector_vpHomogeneousMatrix_to_Array(vec_M_list_arr);
        VpHomogeneousMatrix retVal = new VpHomogeneousMatrix(mean_0(vec_M));
        
        return retVal;
    }
                
    //
    // C++:  vpRotationMatrix getRotationMatrix()
    //

    // Return type 'vpRotationMatrix' is not supported, skipping the function


    //
    // C++:  vpThetaUVector getThetaUVector()
    //

    // Return type 'vpThetaUVector' is not supported, skipping the function


    //
    // C++:  vpTranslationVector getTranslationVector()
    //

    // Return type 'vpTranslationVector' is not supported, skipping the function


    @Override
    public String toString(){
        return toString(nativeObj);
    }
                
    @Override
    protected void finalize() throws Throwable {
        delete(nativeObj);
    }
                


    // C++:   vpHomogeneousMatrix(double tx, double ty, double tz, double tux, double tuy, double tuz)
    private static native long VpHomogeneousMatrix_0(double tx, double ty, double tz, double tux, double tuy, double tuz);

    // C++:   vpHomogeneousMatrix(vector_double v)
    private static native long VpHomogeneousMatrix_1(double[] v);

    // C++:   vpHomogeneousMatrix(vector_float v)
    private static native long VpHomogeneousMatrix_2(float[] v);

    // C++:   vpHomogeneousMatrix(vpHomogeneousMatrix M)
    private static native long VpHomogeneousMatrix_3(long M_nativeObj);

    // C++:   vpHomogeneousMatrix()
    private static native long VpHomogeneousMatrix_4();

    // C++:  bool isAnHomogeneousMatrix()
    private static native boolean isAnHomogeneousMatrix_0(long nativeObj);

    // C++:  void buildFrom(double tx, double ty, double tz, double tux, double tuy, double tuz)
    private static native void buildFrom_0(long nativeObj, double tx, double ty, double tz, double tux, double tuy, double tuz);

    // C++:  void buildFrom(vector_double v)
    private static native void buildFrom_1(long nativeObj, double[] v);

    // C++:  void buildFrom(vector_float v)
    private static native void buildFrom_2(long nativeObj, float[] v);

    // C++:  void convert(vector_double M)
    private static native void convert_0(long nativeObj, double[] M);

    // C++:  void convert(vector_float M)
    private static native void convert_1(long nativeObj, float[] M);

    // C++:  void eye()
    private static native void eye_0(long nativeObj);

    // C++:  void inverse(vpHomogeneousMatrix Mi)
    private static native void inverse_0(long nativeObj, long Mi_nativeObj);

    // C++:  void print()
    private static native void print_0(long nativeObj);

    // C++:  void resize(int nrows, int ncols, bool flagNullify = true)
    private static native void resize_0(long nativeObj, int nrows, int ncols, boolean flagNullify);
    private static native void resize_1(long nativeObj, int nrows, int ncols);

    // C++:  vpColVector getCol(int j)
    private static native long getCol_0(long nativeObj, int j);

    // C++:  vpHomogeneousMatrix inverse()
    private static native long inverse_1(long nativeObj);

    // C++: static vpHomogeneousMatrix mean(vector_vpHomogeneousMatrix vec_M)
    private static native long mean_0(long[] vec_M);

    // native support for java toString()
    private static native String toString(long nativeObj);
                
    // native support for java finalize()
    private static native void delete(long nativeObj);
                
}
