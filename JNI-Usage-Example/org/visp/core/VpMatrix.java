package org.visp.core;

//import java.nio.ByteBuffer;

// C++: class vpMatrix
public class VpMatrix {

    public final long nativeObj;

    public VpMatrix(long addr){
        if (addr == 0)
            throw new java.lang.UnsupportedOperationException("Native object address is NULL");
        nativeObj = addr;
    }
    
    // C++: vpMatrix::vpMatrix()
    public VpMatrix() {
    	nativeObj = n_vpMatrix();
    }
    
    // C++: vpMatrix::vpMatrix(int rows, int cols)
    public VpMatrix(int rows, int cols) {
    	nativeObj = n_vpMatrix(rows,cols);
    }
    
    // C++: vpMatrix::vpMatrix(int rows, int cols, double value)
    public VpMatrix(int rows, int cols, double value) {
    	nativeObj = n_vpMatrix(rows,cols,value);
    }

    // C++: vpMatrix::getCols()
    public int cols() {
        return n_cols(nativeObj);
    }

    // C++: vpMatrix::getRows()
    public int rows() {
        return n_rows(nativeObj);
    }

    // javadoc:Mat::getNativeObjAddr()
    public long getNativeObjAddr() {
        return nativeObj;
    }
    
    // C++: vpMatrix::vpMatrix()
    private static native long n_vpMatrix();
    
    // C++: vpMatrix::vpMatrix(int rows, int cols)
    private static native long n_vpMatrix(int rows, int cols);
    
    // C++: vpMatrix::vpMatrix(int rows, int cols, double value)
    private static native long n_vpMatrix(int rows, int cols, double value);
    
    // C++: int vpMatrix::cols()
    private static native int n_cols(long nativeObj);

    // C++: int vpMatrix::rows()
    private static native int n_rows(long nativeObj);

}
