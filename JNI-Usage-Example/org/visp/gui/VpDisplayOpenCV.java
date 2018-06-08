//
// This file is auto-generated. Please don't modify it!
//
package org.visp.gui;

import java.lang.String;
import org.visp.core.VpImageRGBa;
import org.visp.core.VpImageUChar;

// C++: class VpDisplayOpenCV
//javadoc: VpDisplayOpenCV

public class VpDisplayOpenCV {

    protected final long nativeObj;
    protected VpDisplayOpenCV(long addr) { nativeObj = addr; }

    public long getNativeObjAddr() { return nativeObj; }

    // internal usage only
    public static VpDisplayOpenCV __fromPtr__(long addr) { return new VpDisplayOpenCV(addr); }

    //
    // C++:   vpDisplayOpenCV(int winx, int winy, string title = "")
    //

    //javadoc: VpDisplayOpenCV::VpDisplayOpenCV(winx, winy, title)
    public   VpDisplayOpenCV(int winx, int winy, String title)
    {
        
        nativeObj = VpDisplayOpenCV_0(winx, winy, title);
        
        return;
    }

    //javadoc: VpDisplayOpenCV::VpDisplayOpenCV(winx, winy)
    public   VpDisplayOpenCV(int winx, int winy)
    {
        
        nativeObj = VpDisplayOpenCV_1(winx, winy);
        
        return;
    }


    //
    // C++:   vpDisplayOpenCV(vpImage_char I, int winx = -1, int winy = -1, string title = "", vpScaleType type = SCALE_DEFAULT)
    //

    //javadoc: VpDisplayOpenCV::VpDisplayOpenCV(I, winx, winy, title)
    public   VpDisplayOpenCV(VpImageUChar I, int winx, int winy, String title)
    {
        
        nativeObj = VpDisplayOpenCV_2(I.nativeObj, winx, winy, title);
        
        return;
    }

    //javadoc: VpDisplayOpenCV::VpDisplayOpenCV(I)
    public   VpDisplayOpenCV(VpImageUChar I)
    {
        
        nativeObj = VpDisplayOpenCV_3(I.nativeObj);
        
        return;
    }


    //
    // C++:   vpDisplayOpenCV(vpImage_char I, vpScaleType type)
    //

    // Unknown type 'vpScaleType' (I), skipping the function


    //
    // C++:   vpDisplayOpenCV(vpImage_vpRGBa I, int winx = -1, int winy = -1, string title = "", vpScaleType type = SCALE_DEFAULT)
    //

    //javadoc: VpDisplayOpenCV::VpDisplayOpenCV(I, winx, winy, title)
    public   VpDisplayOpenCV(VpImageRGBa I, int winx, int winy, String title)
    {
        
        nativeObj = VpDisplayOpenCV_4(I.nativeObj, winx, winy, title);
        
        return;
    }

    //javadoc: VpDisplayOpenCV::VpDisplayOpenCV(I)
    public   VpDisplayOpenCV(VpImageRGBa I)
    {
        
        nativeObj = VpDisplayOpenCV_5(I.nativeObj);
        
        return;
    }


    //
    // C++:   vpDisplayOpenCV(vpImage_vpRGBa I, vpScaleType type)
    //

    // Unknown type 'vpScaleType' (I), skipping the function


    //
    // C++:   vpDisplayOpenCV()
    //

    //javadoc: VpDisplayOpenCV::VpDisplayOpenCV()
    public   VpDisplayOpenCV()
    {
        
        nativeObj = VpDisplayOpenCV_6();
        
        return;
    }


    //
    // C++:  int getScreenHeight()
    //

    //javadoc: VpDisplayOpenCV::getScreenHeight()
    public  int getScreenHeight()
    {
        
        int retVal = getScreenHeight_0(nativeObj);
        
        return retVal;
    }


    //
    // C++:  int getScreenWidth()
    //

    //javadoc: VpDisplayOpenCV::getScreenWidth()
    public  int getScreenWidth()
    {
        
        int retVal = getScreenWidth_0(nativeObj);
        
        return retVal;
    }


    //
    // C++:  void getImage(vpImage_vpRGBa I)
    //

    //javadoc: VpDisplayOpenCV::getImage(I)
    public  void getImage(VpImageRGBa I)
    {
        
        getImage_0(nativeObj, I.nativeObj);
        
        return;
    }

    //
    // C++:  void init(int width, int height, int winx = -1, int winy = -1, string title = "")
    //

    //javadoc: VpDisplayOpenCV::init(width, height, winx, winy, title)
    public  void init(int width, int height, int winx, int winy, String title)
    {
        
        init_0(nativeObj, width, height, winx, winy, title);
        
        return;
    }

    //javadoc: VpDisplayOpenCV::init(width, height)
    public  void init(int width, int height)
    {
        
        init_1(nativeObj, width, height);
        
        return;
    }


    //
    // C++:  void init(vpImage_char I, int winx = -1, int winy = -1, string title = "")
    //

    //javadoc: VpDisplayOpenCV::init(I, winx, winy, title)
    public  void init(VpImageUChar I, int winx, int winy, String title)
    {
        
        init_2(nativeObj, I.nativeObj, winx, winy, title);
        
        return;
    }

    //javadoc: VpDisplayOpenCV::init(I)
    public  void init(VpImageUChar I)
    {
        
        init_3(nativeObj, I.nativeObj);
        
        return;
    }


    //
    // C++:  void init(vpImage_vpRGBa I, int winx = -1, int winy = -1, string title = "")
    //

    //javadoc: VpDisplayOpenCV::init(I, winx, winy, title)
    public  void init(VpImageRGBa I, int winx, int winy, String title)
    {
        
        init_4(nativeObj, I.nativeObj, winx, winy, title);
        
        return;
    }

    //javadoc: VpDisplayOpenCV::init(I)
    public  void init(VpImageRGBa I)
    {
        
        init_5(nativeObj, I.nativeObj);
        
        return;
    }


    @Override
    protected void finalize() throws Throwable {
        delete(nativeObj);
    }



    // C++:   vpDisplayOpenCV(int winx, int winy, string title = "")
    private static native long VpDisplayOpenCV_0(int winx, int winy, String title);
    private static native long VpDisplayOpenCV_1(int winx, int winy);

    // C++:   vpDisplayOpenCV(vpImage_char I, int winx = -1, int winy = -1, string title = "", vpScaleType type = SCALE_DEFAULT)
    private static native long VpDisplayOpenCV_2(long I_nativeObj, int winx, int winy, String title);
    private static native long VpDisplayOpenCV_3(long I_nativeObj);

    // C++:   vpDisplayOpenCV(vpImage_vpRGBa I, int winx = -1, int winy = -1, string title = "", vpScaleType type = SCALE_DEFAULT)
    private static native long VpDisplayOpenCV_4(long I_nativeObj, int winx, int winy, String title);
    private static native long VpDisplayOpenCV_5(long I_nativeObj);

    // C++:   vpDisplayOpenCV()
    private static native long VpDisplayOpenCV_6();

    // C++:  int getScreenHeight()
    private static native int getScreenHeight_0(long nativeObj);

    // C++:  int getScreenWidth()
    private static native int getScreenWidth_0(long nativeObj);

    // C++:  void getImage(vpImage_vpRGBa I)
    private static native void getImage_0(long nativeObj, long I_nativeObj);

    // C++:  void init(int width, int height, int winx = -1, int winy = -1, string title = "")
    private static native void init_0(long nativeObj, int width, int height, int winx, int winy, String title);
    private static native void init_1(long nativeObj, int width, int height);

    // C++:  void init(vpImage_char I, int winx = -1, int winy = -1, string title = "")
    private static native void init_2(long nativeObj, long I_nativeObj, int winx, int winy, String title);
    private static native void init_3(long nativeObj, long I_nativeObj);

    // C++:  void init(vpImage_vpRGBa I, int winx = -1, int winy = -1, string title = "")
    private static native void init_4(long nativeObj, long I_nativeObj, int winx, int winy, String title);
    private static native void init_5(long nativeObj, long I_nativeObj);

    // native support for java finalize()
    private static native void delete(long nativeObj);

}
