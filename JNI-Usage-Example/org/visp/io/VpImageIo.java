//
// This file is auto-generated. Please don't modify it!
//
package org.visp.io;

import java.lang.String;
import org.visp.core.VpImageRGBa;
import org.visp.core.VpImageUChar;

// C++: class VpImageIo
//javadoc: VpImageIo

public class VpImageIo {

    protected final long nativeObj;
    protected VpImageIo(long addr) { nativeObj = addr; }

    public long getNativeObjAddr() { return nativeObj; }

    // internal usage only
    public static VpImageIo __fromPtr__(long addr) { return new VpImageIo(addr); }

    //
    // C++: static void read(vpImage_char I, string filename)
    //

    //javadoc: VpImageIo::read(I, filename)
    public static void read(VpImageUChar I, String filename)
    {
        
        read_0(I.nativeObj, filename);
        
        return;
    }


    //
    // C++: static void read(vpImage_vpRGBa I, string filename)
    //

    //javadoc: VpImageIo::read(I, filename)
    public static void read(VpImageRGBa I, String filename)
    {
        
        read_1(I.nativeObj, filename);
        
        return;
    }


    //
    // C++: static void readJPEG(vpImage_char I, string filename)
    //

    //javadoc: VpImageIo::readJPEG(I, filename)
    public static void readJPEG(VpImageUChar I, String filename)
    {
        
        readJPEG_0(I.nativeObj, filename);
        
        return;
    }


    //
    // C++: static void readJPEG(vpImage_vpRGBa I, string filename)
    //

    //javadoc: VpImageIo::readJPEG(I, filename)
    public static void readJPEG(VpImageRGBa I, String filename)
    {
        
        readJPEG_1(I.nativeObj, filename);
        
        return;
    }


    //
    // C++: static void readPFM(vpImage_float I, string filename)
    //

    // Unknown type 'vpImage_float' (I), skipping the function


    //
    // C++: static void readPGM(vpImage_char I, string filename)
    //

    //javadoc: VpImageIo::readPGM(I, filename)
    public static void readPGM(VpImageUChar I, String filename)
    {
        
        readPGM_0(I.nativeObj, filename);
        
        return;
    }


    //
    // C++: static void readPGM(vpImage_vpRGBa I, string filename)
    //

    //javadoc: VpImageIo::readPGM(I, filename)
    public static void readPGM(VpImageRGBa I, String filename)
    {
        
        readPGM_1(I.nativeObj, filename);
        
        return;
    }


    //
    // C++: static void readPNG(vpImage_char I, string filename)
    //

    //javadoc: VpImageIo::readPNG(I, filename)
    public static void readPNG(VpImageUChar I, String filename)
    {
        
        readPNG_0(I.nativeObj, filename);
        
        return;
    }


    //
    // C++: static void readPNG(vpImage_vpRGBa I, string filename)
    //

    //javadoc: VpImageIo::readPNG(I, filename)
    public static void readPNG(VpImageRGBa I, String filename)
    {
        
        readPNG_1(I.nativeObj, filename);
        
        return;
    }


    //
    // C++: static void readPPM(vpImage_char I, string filename)
    //

    //javadoc: VpImageIo::readPPM(I, filename)
    public static void readPPM(VpImageUChar I, String filename)
    {
        
        readPPM_0(I.nativeObj, filename);
        
        return;
    }


    //
    // C++: static void readPPM(vpImage_vpRGBa I, string filename)
    //

    //javadoc: VpImageIo::readPPM(I, filename)
    public static void readPPM(VpImageRGBa I, String filename)
    {
        
        readPPM_1(I.nativeObj, filename);
        
        return;
    }


    //
    // C++: static void write(vpImage_char I, string filename)
    //

    //javadoc: VpImageIo::write(I, filename)
    public static void write(VpImageUChar I, String filename)
    {
        
        write_0(I.nativeObj, filename);
        
        return;
    }


    //
    // C++: static void write(vpImage_vpRGBa I, string filename)
    //

    //javadoc: VpImageIo::write(I, filename)
    public static void write(VpImageRGBa I, String filename)
    {
        
        write_1(I.nativeObj, filename);
        
        return;
    }


    //
    // C++: static void writeJPEG(vpImage_char I, string filename)
    //

    //javadoc: VpImageIo::writeJPEG(I, filename)
    public static void writeJPEG(VpImageUChar I, String filename)
    {
        
        writeJPEG_0(I.nativeObj, filename);
        
        return;
    }


    //
    // C++: static void writeJPEG(vpImage_vpRGBa I, string filename)
    //

    //javadoc: VpImageIo::writeJPEG(I, filename)
    public static void writeJPEG(VpImageRGBa I, String filename)
    {
        
        writeJPEG_1(I.nativeObj, filename);
        
        return;
    }


    //
    // C++: static void writePFM(vpImage_float I, string filename)
    //

    // Unknown type 'vpImage_float' (I), skipping the function


    //
    // C++: static void writePGM(vpImage_char I, string filename)
    //

    //javadoc: VpImageIo::writePGM(I, filename)
    public static void writePGM(VpImageUChar I, String filename)
    {
        
        writePGM_0(I.nativeObj, filename);
        
        return;
    }


    //
    // C++: static void writePGM(vpImage_short I, string filename)
    //

    // Unknown type 'vpImage_short' (I), skipping the function


    //
    // C++: static void writePGM(vpImage_vpRGBa I, string filename)
    //

    //javadoc: VpImageIo::writePGM(I, filename)
    public static void writePGM(VpImageRGBa I, String filename)
    {
        
        writePGM_1(I.nativeObj, filename);
        
        return;
    }


    //
    // C++: static void writePNG(vpImage_char I, string filename)
    //

    //javadoc: VpImageIo::writePNG(I, filename)
    public static void writePNG(VpImageUChar I, String filename)
    {
        
        writePNG_0(I.nativeObj, filename);
        
        return;
    }


    //
    // C++: static void writePNG(vpImage_vpRGBa I, string filename)
    //

    //javadoc: VpImageIo::writePNG(I, filename)
    public static void writePNG(VpImageRGBa I, String filename)
    {
        
        writePNG_1(I.nativeObj, filename);
        
        return;
    }


    //
    // C++: static void writePPM(vpImage_char I, string filename)
    //

    //javadoc: VpImageIo::writePPM(I, filename)
    public static void writePPM(VpImageUChar I, String filename)
    {
        
        writePPM_0(I.nativeObj, filename);
        
        return;
    }


    //
    // C++: static void writePPM(vpImage_vpRGBa I, string filename)
    //

    //javadoc: VpImageIo::writePPM(I, filename)
    public static void writePPM(VpImageRGBa I, String filename)
    {
        
        writePPM_1(I.nativeObj, filename);
        
        return;
    }


    @Override
    protected void finalize() throws Throwable {
        delete(nativeObj);
    }



    // C++: static void read(vpImage_char I, string filename)
    private static native void read_0(long I_nativeObj, String filename);

    // C++: static void read(vpImage_vpRGBa I, string filename)
    private static native void read_1(long I_nativeObj, String filename);

    // C++: static void readJPEG(vpImage_char I, string filename)
    private static native void readJPEG_0(long I_nativeObj, String filename);

    // C++: static void readJPEG(vpImage_vpRGBa I, string filename)
    private static native void readJPEG_1(long I_nativeObj, String filename);

    // C++: static void readPGM(vpImage_char I, string filename)
    private static native void readPGM_0(long I_nativeObj, String filename);

    // C++: static void readPGM(vpImage_vpRGBa I, string filename)
    private static native void readPGM_1(long I_nativeObj, String filename);

    // C++: static void readPNG(vpImage_char I, string filename)
    private static native void readPNG_0(long I_nativeObj, String filename);

    // C++: static void readPNG(vpImage_vpRGBa I, string filename)
    private static native void readPNG_1(long I_nativeObj, String filename);

    // C++: static void readPPM(vpImage_char I, string filename)
    private static native void readPPM_0(long I_nativeObj, String filename);

    // C++: static void readPPM(vpImage_vpRGBa I, string filename)
    private static native void readPPM_1(long I_nativeObj, String filename);

    // C++: static void write(vpImage_char I, string filename)
    private static native void write_0(long I_nativeObj, String filename);

    // C++: static void write(vpImage_vpRGBa I, string filename)
    private static native void write_1(long I_nativeObj, String filename);

    // C++: static void writeJPEG(vpImage_char I, string filename)
    private static native void writeJPEG_0(long I_nativeObj, String filename);

    // C++: static void writeJPEG(vpImage_vpRGBa I, string filename)
    private static native void writeJPEG_1(long I_nativeObj, String filename);

    // C++: static void writePGM(vpImage_char I, string filename)
    private static native void writePGM_0(long I_nativeObj, String filename);

    // C++: static void writePGM(vpImage_vpRGBa I, string filename)
    private static native void writePGM_1(long I_nativeObj, String filename);

    // C++: static void writePNG(vpImage_char I, string filename)
    private static native void writePNG_0(long I_nativeObj, String filename);

    // C++: static void writePNG(vpImage_vpRGBa I, string filename)
    private static native void writePNG_1(long I_nativeObj, String filename);

    // C++: static void writePPM(vpImage_char I, string filename)
    private static native void writePPM_0(long I_nativeObj, String filename);

    // C++: static void writePPM(vpImage_vpRGBa I, string filename)
    private static native void writePPM_1(long I_nativeObj, String filename);

    // native support for java finalize()
    private static native void delete(long nativeObj);

}
