//
// This file is auto-generated. Please don't modify it!
//
package org.visp.core;

import org.visp.core.VpColVector;
import org.visp.core.VpMatrix;
import org.visp.core.VpRotationVector;
import org.visp.core.VpRowVector;

// C++: class VpColVector
//javadoc: VpColVector

public class VpColVector {

    public final long nativeObj;
    public VpColVector(long addr) { nativeObj = addr; }

    public long getNativeObjAddr() { return nativeObj; }

    // internal usage only
    public static VpColVector __fromPtr__(long addr) { return new VpColVector(addr); }

    //
    // C++:   vpColVector(int n, double val)
    //

    //javadoc: VpColVector::VpColVector(n, val)

    public   VpColVector(int n, double val)
    {
        
        nativeObj = VpColVector_0(n, val);
        
        return;
    }
                
    //
    // C++:   vpColVector(int n)
    //

    //javadoc: VpColVector::VpColVector(n)

    public   VpColVector(int n)
    {
        
        nativeObj = VpColVector_1(n);
        
        return;
    }
                
    //
    // C++:   vpColVector(vector_double v)
    //

    //javadoc: VpColVector::VpColVector(v)

    public   VpColVector(double[] v)
    {
        
        nativeObj = VpColVector_2(v);
        
        return;
    }
                
    //
    // C++:   vpColVector(vector_float v)
    //

    //javadoc: VpColVector::VpColVector(v)

    public   VpColVector(float[] v)
    {
        
        nativeObj = VpColVector_3(v);
        
        return;
    }
                
    //
    // C++:   vpColVector(vpColVector v, int r, int nrows)
    //

    //javadoc: VpColVector::VpColVector(v, r, nrows)

    public   VpColVector(VpColVector v, int r, int nrows)
    {
        
        nativeObj = VpColVector_4(v.nativeObj, r, nrows);
        
        return;
    }
                
    //
    // C++:   vpColVector(vpColVector v)
    //

    //javadoc: VpColVector::VpColVector(v)

    public   VpColVector(VpColVector v)
    {
        
        nativeObj = VpColVector_5(v.nativeObj);
        
        return;
    }
                
    //
    // C++:   vpColVector(vpMatrix M, int j)
    //

    //javadoc: VpColVector::VpColVector(M, j)

    public   VpColVector(VpMatrix M, int j)
    {
        
        nativeObj = VpColVector_6(M.nativeObj, j);
        
        return;
    }
                
    //
    // C++:   vpColVector(vpMatrix M)
    //

    //javadoc: VpColVector::VpColVector(M)

    public   VpColVector(VpMatrix M)
    {
        
        nativeObj = VpColVector_7(M.nativeObj);
        
        return;
    }
                
    //
    // C++:   vpColVector(vpPoseVector p)
    //

    // Unknown type 'vpPoseVector' (I), skipping the function


    //
    // C++:   vpColVector(vpRotationVector v)
    //

    //javadoc: VpColVector::VpColVector(v)

    public   VpColVector(VpRotationVector v)
    {
        
        nativeObj = VpColVector_8(v.nativeObj);
        
        return;
    }
                
    //
    // C++:   vpColVector(vpTranslationVector t)
    //

    // Unknown type 'vpTranslationVector' (I), skipping the function


    //
    // C++:   vpColVector()
    //

    //javadoc: VpColVector::VpColVector()

    public   VpColVector()
    {
        
        nativeObj = VpColVector_9();
        
        return;
    }
                
    //
    // C++: static double dotProd(vpColVector a, vpColVector b)
    //

    //javadoc: VpColVector::dotProd(a, b)

    public static double dotProd(VpColVector a, VpColVector b)
    {
        
        double retVal = dotProd_0(a.nativeObj, b.nativeObj);
        
        return retVal;
    }
                
    //
    // C++:  double euclideanNorm()
    //

    //javadoc: VpColVector::euclideanNorm()

    public  double euclideanNorm()
    {
        
        double retVal = euclideanNorm_0(nativeObj);
        
        return retVal;
    }
                
    //
    // C++:  double infinityNorm()
    //

    //javadoc: VpColVector::infinityNorm()

    public  double infinityNorm()
    {
        
        double retVal = infinityNorm_0(nativeObj);
        
        return retVal;
    }
                
    //
    // C++: static double mean(vpColVector v)
    //

    //javadoc: VpColVector::mean(v)

    public static double mean(VpColVector v)
    {
        
        double retVal = mean_0(v.nativeObj);
        
        return retVal;
    }
                
    //
    // C++: static double median(vpColVector v)
    //

    //javadoc: VpColVector::median(v)

    public static double median(VpColVector v)
    {
        
        double retVal = median_0(v.nativeObj);
        
        return retVal;
    }
                
    //
    // C++: static double stdev(vpColVector v, bool useBesselCorrection = false)
    //

    //javadoc: VpColVector::stdev(v, useBesselCorrection)

    public static double stdev(VpColVector v, boolean useBesselCorrection)
    {
        
        double retVal = stdev_0(v.nativeObj, useBesselCorrection);
        
        return retVal;
    }
                    //javadoc: VpColVector::stdev(v)

    public static double stdev(VpColVector v)
    {
        
        double retVal = stdev_1(v.nativeObj);
        
        return retVal;
    }
                
    //
    // C++:  double sum()
    //

    //javadoc: VpColVector::sum()

    public  double sum()
    {
        
        double retVal = sum_0(nativeObj);
        
        return retVal;
    }
                
    //
    // C++:  double sumSquare()
    //

    //javadoc: VpColVector::sumSquare()

    public  double sumSquare()
    {
        
        double retVal = sumSquare_0(nativeObj);
        
        return retVal;
    }
                
    //
    // C++:  int print(ostream s, int length, c_string intro = 0)
    //

    // Unknown type 'ostream' (I), skipping the function


    //
    // C++:  ostream cppPrint(ostream os, string matrixName = "A", bool octet = false)
    //

    // Return type 'ostream' is not supported, skipping the function


    //
    // C++:  ostream csvPrint(ostream os)
    //

    // Return type 'ostream' is not supported, skipping the function


    //
    // C++:  ostream maplePrint(ostream os)
    //

    // Return type 'ostream' is not supported, skipping the function


    //
    // C++:  ostream matlabPrint(ostream os)
    //

    // Return type 'ostream' is not supported, skipping the function


    //
    // C++:  void clear()
    //

    //javadoc: VpColVector::clear()

    public  void clear()
    {
        
        clear_0(nativeObj);
        
        return;
    }
                
    //
    // C++:  void deg2rad()
    //

    //javadoc: VpColVector::deg2rad()

    public  void deg2rad()
    {
        
        deg2rad_0(nativeObj);
        
        return;
    }
                
    //
    // C++:  void init(vpColVector v, int r, int nrows)
    //

    //javadoc: VpColVector::init(v, r, nrows)

    public  void init(VpColVector v, int r, int nrows)
    {
        
        init_0(nativeObj, v.nativeObj, r, nrows);
        
        return;
    }
                
    //
    // C++:  void rad2deg()
    //

    //javadoc: VpColVector::rad2deg()

    public  void rad2deg()
    {
        
        rad2deg_0(nativeObj);
        
        return;
    }
                
    //
    // C++:  void reshape(vpMatrix M, int nrows, int ncols)
    //

    //javadoc: VpColVector::reshape(M, nrows, ncols)

    public  void reshape(VpMatrix M, int nrows, int ncols)
    {
        
        reshape_0(nativeObj, M.nativeObj, nrows, ncols);
        
        return;
    }
                
    //
    // C++:  void resize(int i, bool flagNullify = true)
    //

    //javadoc: VpColVector::resize(i, flagNullify)

    public  void resize(int i, boolean flagNullify)
    {
        
        resize_0(nativeObj, i, flagNullify);
        
        return;
    }
                    //javadoc: VpColVector::resize(i)

    public  void resize(int i)
    {
        
        resize_1(nativeObj, i);
        
        return;
    }
                
    //
    // C++:  void resize(int nrows, int ncols, bool flagNullify)
    //

    //javadoc: VpColVector::resize(nrows, ncols, flagNullify)

    public  void resize(int nrows, int ncols, boolean flagNullify)
    {
        
        resize_2(nativeObj, nrows, ncols, flagNullify);
        
        return;
    }
                
    //
    // C++:  void stack(double d)
    //

    //javadoc: VpColVector::stack(d)

    public  void stack(double d)
    {
        
        stack_0(nativeObj, d);
        
        return;
    }
                
    //
    // C++: static void stack(vpColVector A, vpColVector B, vpColVector C)
    //

    //javadoc: VpColVector::stack(A, B, C)

    public static void stack(VpColVector A, VpColVector B, VpColVector C)
    {
        
        stack_1(A.nativeObj, B.nativeObj, C.nativeObj);
        
        return;
    }
                
    //
    // C++:  void stack(vpColVector v)
    //

    //javadoc: VpColVector::stack(v)

    public  void stack(VpColVector v)
    {
        
        stack_2(nativeObj, v.nativeObj);
        
        return;
    }
                
    //
    // C++:  void transpose(vpRowVector v)
    //

    //javadoc: VpColVector::transpose(v)

    public  void transpose(VpRowVector v)
    {
        
        transpose_0(nativeObj, v.nativeObj);
        
        return;
    }
                
    //
    // C++: static vpColVector cross(vpColVector a, vpColVector b)
    //

    //javadoc: VpColVector::cross(a, b)

    public static VpColVector cross(VpColVector a, VpColVector b)
    {
        
        VpColVector retVal = new VpColVector(cross_0(a.nativeObj, b.nativeObj));
        
        return retVal;
    }
                
    //
    // C++: static vpColVector crossProd(vpColVector a, vpColVector b)
    //

    //javadoc: VpColVector::crossProd(a, b)

    public static VpColVector crossProd(VpColVector a, VpColVector b)
    {
        
        VpColVector retVal = new VpColVector(crossProd_0(a.nativeObj, b.nativeObj));
        
        return retVal;
    }
                
    //
    // C++:  vpColVector extract(int r, int colsize)
    //

    //javadoc: VpColVector::extract(r, colsize)

    public  VpColVector extract(int r, int colsize)
    {
        
        VpColVector retVal = new VpColVector(extract_0(nativeObj, r, colsize));
        
        return retVal;
    }
                
    //
    // C++:  vpColVector hadamard(vpColVector v)
    //

    //javadoc: VpColVector::hadamard(v)

    public  VpColVector hadamard(VpColVector v)
    {
        
        VpColVector retVal = new VpColVector(hadamard_0(nativeObj, v.nativeObj));
        
        return retVal;
    }
                
    //
    // C++: static vpColVector invSort(vpColVector v)
    //

    //javadoc: VpColVector::invSort(v)

    public static VpColVector invSort(VpColVector v)
    {
        
        VpColVector retVal = new VpColVector(invSort_0(v.nativeObj));
        
        return retVal;
    }
                
    //
    // C++:  vpColVector normalize(vpColVector x)
    //

    //javadoc: VpColVector::normalize(x)

    public  VpColVector normalize(VpColVector x)
    {
        
        VpColVector retVal = new VpColVector(normalize_0(nativeObj, x.nativeObj));
        
        return retVal;
    }
                
    //
    // C++:  vpColVector normalize()
    //

    //javadoc: VpColVector::normalize()

    public  VpColVector normalize()
    {
        
        VpColVector retVal = new VpColVector(normalize_1(nativeObj));
        
        return retVal;
    }
                
    //
    // C++: static vpColVector sort(vpColVector v)
    //

    //javadoc: VpColVector::sort(v)

    public static VpColVector sort(VpColVector v)
    {
        
        VpColVector retVal = new VpColVector(sort_0(v.nativeObj));
        
        return retVal;
    }
                
    //
    // C++: static vpColVector stack(vpColVector A, vpColVector B)
    //

    //javadoc: VpColVector::stack(A, B)

    public static VpColVector stack(VpColVector A, VpColVector B)
    {
        
        VpColVector retVal = new VpColVector(stack_3(A.nativeObj, B.nativeObj));
        
        return retVal;
    }
                
    //
    // C++:  vpMatrix reshape(int nrows, int ncols)
    //

    //javadoc: VpColVector::reshape(nrows, ncols)

    public  VpMatrix reshape(int nrows, int ncols)
    {
        
        VpMatrix retVal = new VpMatrix(reshape_1(nativeObj, nrows, ncols));
        
        return retVal;
    }
                
    //
    // C++: static vpMatrix skew(vpColVector v)
    //

    //javadoc: VpColVector::skew(v)

    public static VpMatrix skew(VpColVector v)
    {
        
        VpMatrix retVal = new VpMatrix(skew_0(v.nativeObj));
        
        return retVal;
    }
                
    //
    // C++:  vpRowVector t()
    //

    //javadoc: VpColVector::t()

    public  VpRowVector t()
    {
        
        VpRowVector retVal = new VpRowVector(t_0(nativeObj));
        
        return retVal;
    }
                
    //
    // C++:  vpRowVector transpose()
    //

    //javadoc: VpColVector::transpose()

    public  VpRowVector transpose()
    {
        
        VpRowVector retVal = new VpRowVector(transpose_1(nativeObj));
        
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
                


    // C++:   vpColVector(int n, double val)
    private static native long VpColVector_0(int n, double val);

    // C++:   vpColVector(int n)
    private static native long VpColVector_1(int n);

    // C++:   vpColVector(vector_double v)
    private static native long VpColVector_2(double[] v);

    // C++:   vpColVector(vector_float v)
    private static native long VpColVector_3(float[] v);

    // C++:   vpColVector(vpColVector v, int r, int nrows)
    private static native long VpColVector_4(long v_nativeObj, int r, int nrows);

    // C++:   vpColVector(vpColVector v)
    private static native long VpColVector_5(long v_nativeObj);

    // C++:   vpColVector(vpMatrix M, int j)
    private static native long VpColVector_6(long M_nativeObj, int j);

    // C++:   vpColVector(vpMatrix M)
    private static native long VpColVector_7(long M_nativeObj);

    // C++:   vpColVector(vpRotationVector v)
    private static native long VpColVector_8(long v_nativeObj);

    // C++:   vpColVector()
    private static native long VpColVector_9();

    // C++: static double dotProd(vpColVector a, vpColVector b)
    private static native double dotProd_0(long a_nativeObj, long b_nativeObj);

    // C++:  double euclideanNorm()
    private static native double euclideanNorm_0(long nativeObj);

    // C++:  double infinityNorm()
    private static native double infinityNorm_0(long nativeObj);

    // C++: static double mean(vpColVector v)
    private static native double mean_0(long v_nativeObj);

    // C++: static double median(vpColVector v)
    private static native double median_0(long v_nativeObj);

    // C++: static double stdev(vpColVector v, bool useBesselCorrection = false)
    private static native double stdev_0(long v_nativeObj, boolean useBesselCorrection);
    private static native double stdev_1(long v_nativeObj);

    // C++:  double sum()
    private static native double sum_0(long nativeObj);

    // C++:  double sumSquare()
    private static native double sumSquare_0(long nativeObj);

    // C++:  void clear()
    private static native void clear_0(long nativeObj);

    // C++:  void deg2rad()
    private static native void deg2rad_0(long nativeObj);

    // C++:  void init(vpColVector v, int r, int nrows)
    private static native void init_0(long nativeObj, long v_nativeObj, int r, int nrows);

    // C++:  void rad2deg()
    private static native void rad2deg_0(long nativeObj);

    // C++:  void reshape(vpMatrix M, int nrows, int ncols)
    private static native void reshape_0(long nativeObj, long M_nativeObj, int nrows, int ncols);

    // C++:  void resize(int i, bool flagNullify = true)
    private static native void resize_0(long nativeObj, int i, boolean flagNullify);
    private static native void resize_1(long nativeObj, int i);

    // C++:  void resize(int nrows, int ncols, bool flagNullify)
    private static native void resize_2(long nativeObj, int nrows, int ncols, boolean flagNullify);

    // C++:  void stack(double d)
    private static native void stack_0(long nativeObj, double d);

    // C++: static void stack(vpColVector A, vpColVector B, vpColVector C)
    private static native void stack_1(long A_nativeObj, long B_nativeObj, long C_nativeObj);

    // C++:  void stack(vpColVector v)
    private static native void stack_2(long nativeObj, long v_nativeObj);

    // C++:  void transpose(vpRowVector v)
    private static native void transpose_0(long nativeObj, long v_nativeObj);

    // C++: static vpColVector cross(vpColVector a, vpColVector b)
    private static native long cross_0(long a_nativeObj, long b_nativeObj);

    // C++: static vpColVector crossProd(vpColVector a, vpColVector b)
    private static native long crossProd_0(long a_nativeObj, long b_nativeObj);

    // C++:  vpColVector extract(int r, int colsize)
    private static native long extract_0(long nativeObj, int r, int colsize);

    // C++:  vpColVector hadamard(vpColVector v)
    private static native long hadamard_0(long nativeObj, long v_nativeObj);

    // C++: static vpColVector invSort(vpColVector v)
    private static native long invSort_0(long v_nativeObj);

    // C++:  vpColVector normalize(vpColVector x)
    private static native long normalize_0(long nativeObj, long x_nativeObj);

    // C++:  vpColVector normalize()
    private static native long normalize_1(long nativeObj);

    // C++: static vpColVector sort(vpColVector v)
    private static native long sort_0(long v_nativeObj);

    // C++: static vpColVector stack(vpColVector A, vpColVector B)
    private static native long stack_3(long A_nativeObj, long B_nativeObj);

    // C++:  vpMatrix reshape(int nrows, int ncols)
    private static native long reshape_1(long nativeObj, int nrows, int ncols);

    // C++: static vpMatrix skew(vpColVector v)
    private static native long skew_0(long v_nativeObj);

    // C++:  vpRowVector t()
    private static native long t_0(long nativeObj);

    // C++:  vpRowVector transpose()
    private static native long transpose_1(long nativeObj);

	
	
	
	
    // native support for java toString()
    private static native String toString(long nativeObj);
                
    // native support for java finalize()
    private static native void delete(long nativeObj);
                
}
