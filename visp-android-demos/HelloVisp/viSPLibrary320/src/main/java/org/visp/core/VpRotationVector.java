//
// This file is auto-generated. Please don't modify it!
//
package org.visp.core;

import org.visp.core.VpRotationVector;
import org.visp.core.VpRowVector;

// C++: class VpRotationVector
//javadoc: VpRotationVector

public class VpRotationVector {

    public final long nativeObj;
    public VpRotationVector(long addr) { nativeObj = addr; }

    public long getNativeObjAddr() { return nativeObj; }

    // internal usage only
    public static VpRotationVector __fromPtr__(long addr) { return new VpRotationVector(addr); }

    //
    // C++:   vpRotationVector(int n)
    //

    //javadoc: VpRotationVector::VpRotationVector(n)

    public   VpRotationVector(int n)
    {
        
        nativeObj = VpRotationVector_0(n);
        
        return;
    }
                
    //
    // C++:   vpRotationVector(vpRotationVector v)
    //

    //javadoc: VpRotationVector::VpRotationVector(v)

    public   VpRotationVector(VpRotationVector v)
    {
        
        nativeObj = VpRotationVector_1(v.nativeObj);
        
        return;
    }
                
    //
    // C++:   vpRotationVector()
    //

    //javadoc: VpRotationVector::VpRotationVector()

    public   VpRotationVector()
    {
        
        nativeObj = VpRotationVector_2();
        
        return;
    }
                
    //
    // C++:  double sumSquare()
    //

    //javadoc: VpRotationVector::sumSquare()

    public  double sumSquare()
    {
        
        double retVal = sumSquare_0(nativeObj);
        
        return retVal;
    }
                
    //
    // C++:  vpRowVector t()
    //

    //javadoc: VpRotationVector::t()

    public  VpRowVector t()
    {
        
        VpRowVector retVal = new VpRowVector(t_0(nativeObj));
        
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
                


    // C++:   vpRotationVector(int n)
    private static native long VpRotationVector_0(int n);

    // C++:   vpRotationVector(vpRotationVector v)
    private static native long VpRotationVector_1(long v_nativeObj);

    // C++:   vpRotationVector()
    private static native long VpRotationVector_2();

    // C++:  double sumSquare()
    private static native double sumSquare_0(long nativeObj);

    // C++:  vpRowVector t()
    private static native long t_0(long nativeObj);

	
	
    // native support for java toString()
    private static native String toString(long nativeObj);
                
    // native support for java finalize()
    private static native void delete(long nativeObj);
                
}
