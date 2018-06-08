//
// This file is auto-generated. Please don't modify it!
//
package org.visp.imgproc;



// C++: class VpImgproc
//javadoc: VpImgproc

public class VpImgproc {

    protected final long nativeObj;
    protected VpImgproc(long addr) { nativeObj = addr; }

    public long getNativeObjAddr() { return nativeObj; }

    // internal usage only
    public static VpImgproc __fromPtr__(long addr) { return new VpImgproc(addr); }

    @Override
    protected void finalize() throws Throwable {
        delete(nativeObj);
    }



    // native support for java finalize()
    private static native void delete(long nativeObj);

}
