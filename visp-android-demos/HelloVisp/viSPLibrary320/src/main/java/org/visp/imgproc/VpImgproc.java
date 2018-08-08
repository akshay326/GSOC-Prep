//
// This file is auto-generated. Please don't modify it!
//
package org.visp.imgproc;

import org.visp.core.VpImageRGBa;
import org.visp.core.VpImageUChar;

// C++: class VpImgproc
//javadoc: VpImgproc

public class VpImgproc {

    public final long nativeObj;
    public VpImgproc(long addr) { nativeObj = addr; }

    public long getNativeObjAddr() { return nativeObj; }

    // internal usage only
    public static VpImgproc __fromPtr__(long addr) { return new VpImgproc(addr); }

    //
    // C++: static char autoThreshold(vpImage_char I, vp_vpAutoThresholdMethod method, char backgroundValue = 0, char foregroundValue = 255)
    //

    // Unknown type 'vp_vpAutoThresholdMethod' (I), skipping the function


    //
    // C++: static void adjust(vpImage_char I1, vpImage_char I2, double alpha, double beta)
    //

    //javadoc: Vp::adjust(I1, I2, alpha, beta)

    public static void adjust(VpImageUChar I1, VpImageUChar I2, double alpha, double beta)
    {
        
        adjust_0(I1.nativeObj, I2.nativeObj, alpha, beta);
        
        return;
    }
                
    //
    // C++: static void adjust(vpImage_char I, double alpha, double beta)
    //

    //javadoc: Vp::adjust(I, alpha, beta)

    public static void adjust(VpImageUChar I, double alpha, double beta)
    {
        
        adjust_1(I.nativeObj, alpha, beta);
        
        return;
    }
                
    //
    // C++: static void adjust(vpImage_vpRGBa I1, vpImage_vpRGBa I2, double alpha, double beta)
    //

    //javadoc: Vp::adjust(I1, I2, alpha, beta)

    public static void adjust(VpImageRGBa I1, VpImageRGBa I2, double alpha, double beta)
    {
        
        adjust_2(I1.nativeObj, I2.nativeObj, alpha, beta);
        
        return;
    }
                
    //
    // C++: static void adjust(vpImage_vpRGBa I, double alpha, double beta)
    //

    //javadoc: Vp::adjust(I, alpha, beta)

    public static void adjust(VpImageRGBa I, double alpha, double beta)
    {
        
        adjust_3(I.nativeObj, alpha, beta);
        
        return;
    }
                
    //
    // C++: static void clahe(vpImage_char I1, vpImage_char I2, int blockRadius = 150, int bins = 256, float slope = 3.0f, bool fast = true)
    //

    //javadoc: Vp::clahe(I1, I2, blockRadius, bins, slope, fast)

    public static void clahe(VpImageUChar I1, VpImageUChar I2, int blockRadius, int bins, float slope, boolean fast)
    {
        
        clahe_0(I1.nativeObj, I2.nativeObj, blockRadius, bins, slope, fast);
        
        return;
    }
                    //javadoc: Vp::clahe(I1, I2)

    public static void clahe(VpImageUChar I1, VpImageUChar I2)
    {
        
        clahe_1(I1.nativeObj, I2.nativeObj);
        
        return;
    }
                
    //
    // C++: static void clahe(vpImage_vpRGBa I1, vpImage_vpRGBa I2, int blockRadius = 150, int bins = 256, float slope = 3.0f, bool fast = true)
    //

    //javadoc: Vp::clahe(I1, I2, blockRadius, bins, slope, fast)

    public static void clahe(VpImageRGBa I1, VpImageRGBa I2, int blockRadius, int bins, float slope, boolean fast)
    {
        
        clahe_2(I1.nativeObj, I2.nativeObj, blockRadius, bins, slope, fast);
        
        return;
    }
                    //javadoc: Vp::clahe(I1, I2)

    public static void clahe(VpImageRGBa I1, VpImageRGBa I2)
    {
        
        clahe_3(I1.nativeObj, I2.nativeObj);
        
        return;
    }
                
    //
    // C++: static void connectedComponents(vpImage_char I, vpImage_int labels, int nbComponents, vpImageMorphology_vpConnexityType connexity = vpImageMorphology::CONNEXITY_4)
    //

    // Unknown type 'vpImage_int' (I), skipping the function


    //
    // C++: static void equalizeHistogram(vpImage_char I1, vpImage_char I2)
    //

    //javadoc: Vp::equalizeHistogram(I1, I2)

    public static void equalizeHistogram(VpImageUChar I1, VpImageUChar I2)
    {
        
        equalizeHistogram_0(I1.nativeObj, I2.nativeObj);
        
        return;
    }
                
    //
    // C++: static void equalizeHistogram(vpImage_char I)
    //

    //javadoc: Vp::equalizeHistogram(I)

    public static void equalizeHistogram(VpImageUChar I)
    {
        
        equalizeHistogram_1(I.nativeObj);
        
        return;
    }
                
    //
    // C++: static void equalizeHistogram(vpImage_vpRGBa I1, vpImage_vpRGBa I2, bool useHSV = false)
    //

    //javadoc: Vp::equalizeHistogram(I1, I2, useHSV)

    public static void equalizeHistogram(VpImageRGBa I1, VpImageRGBa I2, boolean useHSV)
    {
        
        equalizeHistogram_2(I1.nativeObj, I2.nativeObj, useHSV);
        
        return;
    }
                    //javadoc: Vp::equalizeHistogram(I1, I2)

    public static void equalizeHistogram(VpImageRGBa I1, VpImageRGBa I2)
    {
        
        equalizeHistogram_3(I1.nativeObj, I2.nativeObj);
        
        return;
    }
                
    //
    // C++: static void equalizeHistogram(vpImage_vpRGBa I, bool useHSV = false)
    //

    //javadoc: Vp::equalizeHistogram(I, useHSV)

    public static void equalizeHistogram(VpImageRGBa I, boolean useHSV)
    {
        
        equalizeHistogram_4(I.nativeObj, useHSV);
        
        return;
    }
                    //javadoc: Vp::equalizeHistogram(I)

    public static void equalizeHistogram(VpImageRGBa I)
    {
        
        equalizeHistogram_5(I.nativeObj);
        
        return;
    }
                
    //
    // C++: static void gammaCorrection(vpImage_char I1, vpImage_char I2, double gamma)
    //

    //javadoc: Vp::gammaCorrection(I1, I2, gamma)

    public static void gammaCorrection(VpImageUChar I1, VpImageUChar I2, double gamma)
    {
        
        gammaCorrection_0(I1.nativeObj, I2.nativeObj, gamma);
        
        return;
    }
                
    //
    // C++: static void gammaCorrection(vpImage_char I, double gamma)
    //

    //javadoc: Vp::gammaCorrection(I, gamma)

    public static void gammaCorrection(VpImageUChar I, double gamma)
    {
        
        gammaCorrection_1(I.nativeObj, gamma);
        
        return;
    }
                
    //
    // C++: static void gammaCorrection(vpImage_vpRGBa I1, vpImage_vpRGBa I2, double gamma)
    //

    //javadoc: Vp::gammaCorrection(I1, I2, gamma)

    public static void gammaCorrection(VpImageRGBa I1, VpImageRGBa I2, double gamma)
    {
        
        gammaCorrection_2(I1.nativeObj, I2.nativeObj, gamma);
        
        return;
    }
                
    //
    // C++: static void gammaCorrection(vpImage_vpRGBa I, double gamma)
    //

    //javadoc: Vp::gammaCorrection(I, gamma)

    public static void gammaCorrection(VpImageRGBa I, double gamma)
    {
        
        gammaCorrection_3(I.nativeObj, gamma);
        
        return;
    }
                
    //
    // C++: static void retinex(vpImage_vpRGBa I1, vpImage_vpRGBa I2, int scale = 240, int scaleDiv = 3, int level = RETINEX_UNIFORM, double dynamic = 1.2, int kernelSize = -1)
    //

    //javadoc: Vp::retinex(I1, I2, scale, scaleDiv, level, dynamic, kernelSize)

    public static void retinex(VpImageRGBa I1, VpImageRGBa I2, int scale, int scaleDiv, int level, double dynamic, int kernelSize)
    {
        
        retinex_0(I1.nativeObj, I2.nativeObj, scale, scaleDiv, level, dynamic, kernelSize);
        
        return;
    }
                    //javadoc: Vp::retinex(I1, I2)

    public static void retinex(VpImageRGBa I1, VpImageRGBa I2)
    {
        
        retinex_1(I1.nativeObj, I2.nativeObj);
        
        return;
    }
                
    //
    // C++: static void retinex(vpImage_vpRGBa I, int scale = 240, int scaleDiv = 3, int level = RETINEX_UNIFORM, double dynamic = 1.2, int kernelSize = -1)
    //

    //javadoc: Vp::retinex(I, scale, scaleDiv, level, dynamic, kernelSize)

    public static void retinex(VpImageRGBa I, int scale, int scaleDiv, int level, double dynamic, int kernelSize)
    {
        
        retinex_2(I.nativeObj, scale, scaleDiv, level, dynamic, kernelSize);
        
        return;
    }
                    //javadoc: Vp::retinex(I)

    public static void retinex(VpImageRGBa I)
    {
        
        retinex_3(I.nativeObj);
        
        return;
    }
                
    //
    // C++: static void stretchContrast(vpImage_char I1, vpImage_char I2)
    //

    //javadoc: Vp::stretchContrast(I1, I2)

    public static void stretchContrast(VpImageUChar I1, VpImageUChar I2)
    {
        
        stretchContrast_0(I1.nativeObj, I2.nativeObj);
        
        return;
    }
                
    //
    // C++: static void stretchContrast(vpImage_char I)
    //

    //javadoc: Vp::stretchContrast(I)

    public static void stretchContrast(VpImageUChar I)
    {
        
        stretchContrast_1(I.nativeObj);
        
        return;
    }
                
    //
    // C++: static void stretchContrast(vpImage_vpRGBa I1, vpImage_vpRGBa I2)
    //

    //javadoc: Vp::stretchContrast(I1, I2)

    public static void stretchContrast(VpImageRGBa I1, VpImageRGBa I2)
    {
        
        stretchContrast_2(I1.nativeObj, I2.nativeObj);
        
        return;
    }
                
    //
    // C++: static void stretchContrast(vpImage_vpRGBa I)
    //

    //javadoc: Vp::stretchContrast(I)

    public static void stretchContrast(VpImageRGBa I)
    {
        
        stretchContrast_3(I.nativeObj);
        
        return;
    }
                
    //
    // C++: static void stretchContrastHSV(vpImage_vpRGBa I1, vpImage_vpRGBa I2)
    //

    //javadoc: Vp::stretchContrastHSV(I1, I2)

    public static void stretchContrastHSV(VpImageRGBa I1, VpImageRGBa I2)
    {
        
        stretchContrastHSV_0(I1.nativeObj, I2.nativeObj);
        
        return;
    }
                
    //
    // C++: static void stretchContrastHSV(vpImage_vpRGBa I)
    //

    //javadoc: Vp::stretchContrastHSV(I)

    public static void stretchContrastHSV(VpImageRGBa I)
    {
        
        stretchContrastHSV_1(I.nativeObj);
        
        return;
    }
                
    //
    // C++: static void unsharpMask(vpImage_char I, int size = 7, double weight = 0.6)
    //

    //javadoc: Vp::unsharpMask(I, size, weight)

    public static void unsharpMask(VpImageUChar I, int size, double weight)
    {
        
        unsharpMask_0(I.nativeObj, size, weight);
        
        return;
    }
                    //javadoc: Vp::unsharpMask(I)

    public static void unsharpMask(VpImageUChar I)
    {
        
        unsharpMask_1(I.nativeObj);
        
        return;
    }
                
    //
    // C++: static void unsharpMask(vpImage_char I, vpImage_char Ires, int size = 7, double weight = 0.6)
    //

    //javadoc: Vp::unsharpMask(I, Ires, size, weight)

    public static void unsharpMask(VpImageUChar I, VpImageUChar Ires, int size, double weight)
    {
        
        unsharpMask_2(I.nativeObj, Ires.nativeObj, size, weight);
        
        return;
    }
                    //javadoc: Vp::unsharpMask(I, Ires)

    public static void unsharpMask(VpImageUChar I, VpImageUChar Ires)
    {
        
        unsharpMask_3(I.nativeObj, Ires.nativeObj);
        
        return;
    }
                
    //
    // C++: static void unsharpMask(vpImage_vpRGBa I, int size = 7, double weight = 0.6)
    //

    //javadoc: Vp::unsharpMask(I, size, weight)

    public static void unsharpMask(VpImageRGBa I, int size, double weight)
    {
        
        unsharpMask_4(I.nativeObj, size, weight);
        
        return;
    }
                    //javadoc: Vp::unsharpMask(I)

    public static void unsharpMask(VpImageRGBa I)
    {
        
        unsharpMask_5(I.nativeObj);
        
        return;
    }
                
    //
    // C++: static void unsharpMask(vpImage_vpRGBa I, vpImage_vpRGBa Ires, int size = 7, double weight = 0.6)
    //

    //javadoc: Vp::unsharpMask(I, Ires, size, weight)

    public static void unsharpMask(VpImageRGBa I, VpImageRGBa Ires, int size, double weight)
    {
        
        unsharpMask_6(I.nativeObj, Ires.nativeObj, size, weight);
        
        return;
    }
                    //javadoc: Vp::unsharpMask(I, Ires)

    public static void unsharpMask(VpImageRGBa I, VpImageRGBa Ires)
    {
        
        unsharpMask_7(I.nativeObj, Ires.nativeObj);
        
        return;
    }
                
	
//
	// manual port
	// C++: static void reconstruct(vpImage_char marker, vpImage_char mask, vpImage_char I, vpImageMorphology_vpConnexityType connexity = vpImageMorphology::CONNEXITY_4)
	//
	//javadoc: Vp::reconstruct(marker, mask, I)

	public static void reconstruct(VpImageUChar marker, VpImageUChar mask, VpImageUChar I)
	{
	   reconstruct(marker.nativeObj, mask.nativeObj, I.nativeObj);
	}
	
	//
	// C++: static void fillHoles(vpImage_char I, vpImageMorphology_vpConnexityType connexity = vpImageMorphology::CONNEXITY_4)
	//
	

	//javadoc: Vp::fillHoles(I)
	

	public static void fillHoles(VpImageUChar I)
	{
	       fillHoles(I.nativeObj);
	       return;
	}
	

	
	
//
	// manual port
	// C++: static void floodFill(vpImage_char I, vpImagePoint seedPoint, char oldValue, char newValue, vpImageMorphology_vpConnexityType connexity = vpImageMorphology::CONNEXITY_4)

	//javadoc: Vp::floodFill(I, seedPoint, oldValue, newValue)

	public static void floodFill(VpImageUChar I, org.visp.core.VpImagePoint seedPoint, char oldValue, char newValue)
	{
	    floodFill(I.nativeObj, seedPoint.i, seedPoint.j, oldValue, newValue);
	}
	


    // C++: static void adjust(vpImage_char I1, vpImage_char I2, double alpha, double beta)
    private static native void adjust_0(long I1_nativeObj, long I2_nativeObj, double alpha, double beta);

    // C++: static void adjust(vpImage_char I, double alpha, double beta)
    private static native void adjust_1(long I_nativeObj, double alpha, double beta);

    // C++: static void adjust(vpImage_vpRGBa I1, vpImage_vpRGBa I2, double alpha, double beta)
    private static native void adjust_2(long I1_nativeObj, long I2_nativeObj, double alpha, double beta);

    // C++: static void adjust(vpImage_vpRGBa I, double alpha, double beta)
    private static native void adjust_3(long I_nativeObj, double alpha, double beta);

    // C++: static void clahe(vpImage_char I1, vpImage_char I2, int blockRadius = 150, int bins = 256, float slope = 3.0f, bool fast = true)
    private static native void clahe_0(long I1_nativeObj, long I2_nativeObj, int blockRadius, int bins, float slope, boolean fast);
    private static native void clahe_1(long I1_nativeObj, long I2_nativeObj);

    // C++: static void clahe(vpImage_vpRGBa I1, vpImage_vpRGBa I2, int blockRadius = 150, int bins = 256, float slope = 3.0f, bool fast = true)
    private static native void clahe_2(long I1_nativeObj, long I2_nativeObj, int blockRadius, int bins, float slope, boolean fast);
    private static native void clahe_3(long I1_nativeObj, long I2_nativeObj);

    // C++: static void equalizeHistogram(vpImage_char I1, vpImage_char I2)
    private static native void equalizeHistogram_0(long I1_nativeObj, long I2_nativeObj);

    // C++: static void equalizeHistogram(vpImage_char I)
    private static native void equalizeHistogram_1(long I_nativeObj);

    // C++: static void equalizeHistogram(vpImage_vpRGBa I1, vpImage_vpRGBa I2, bool useHSV = false)
    private static native void equalizeHistogram_2(long I1_nativeObj, long I2_nativeObj, boolean useHSV);
    private static native void equalizeHistogram_3(long I1_nativeObj, long I2_nativeObj);

    // C++: static void equalizeHistogram(vpImage_vpRGBa I, bool useHSV = false)
    private static native void equalizeHistogram_4(long I_nativeObj, boolean useHSV);
    private static native void equalizeHistogram_5(long I_nativeObj);

    // C++: static void gammaCorrection(vpImage_char I1, vpImage_char I2, double gamma)
    private static native void gammaCorrection_0(long I1_nativeObj, long I2_nativeObj, double gamma);

    // C++: static void gammaCorrection(vpImage_char I, double gamma)
    private static native void gammaCorrection_1(long I_nativeObj, double gamma);

    // C++: static void gammaCorrection(vpImage_vpRGBa I1, vpImage_vpRGBa I2, double gamma)
    private static native void gammaCorrection_2(long I1_nativeObj, long I2_nativeObj, double gamma);

    // C++: static void gammaCorrection(vpImage_vpRGBa I, double gamma)
    private static native void gammaCorrection_3(long I_nativeObj, double gamma);

    // C++: static void retinex(vpImage_vpRGBa I1, vpImage_vpRGBa I2, int scale = 240, int scaleDiv = 3, int level = RETINEX_UNIFORM, double dynamic = 1.2, int kernelSize = -1)
    private static native void retinex_0(long I1_nativeObj, long I2_nativeObj, int scale, int scaleDiv, int level, double dynamic, int kernelSize);
    private static native void retinex_1(long I1_nativeObj, long I2_nativeObj);

    // C++: static void retinex(vpImage_vpRGBa I, int scale = 240, int scaleDiv = 3, int level = RETINEX_UNIFORM, double dynamic = 1.2, int kernelSize = -1)
    private static native void retinex_2(long I_nativeObj, int scale, int scaleDiv, int level, double dynamic, int kernelSize);
    private static native void retinex_3(long I_nativeObj);

    // C++: static void stretchContrast(vpImage_char I1, vpImage_char I2)
    private static native void stretchContrast_0(long I1_nativeObj, long I2_nativeObj);

    // C++: static void stretchContrast(vpImage_char I)
    private static native void stretchContrast_1(long I_nativeObj);

    // C++: static void stretchContrast(vpImage_vpRGBa I1, vpImage_vpRGBa I2)
    private static native void stretchContrast_2(long I1_nativeObj, long I2_nativeObj);

    // C++: static void stretchContrast(vpImage_vpRGBa I)
    private static native void stretchContrast_3(long I_nativeObj);

    // C++: static void stretchContrastHSV(vpImage_vpRGBa I1, vpImage_vpRGBa I2)
    private static native void stretchContrastHSV_0(long I1_nativeObj, long I2_nativeObj);

    // C++: static void stretchContrastHSV(vpImage_vpRGBa I)
    private static native void stretchContrastHSV_1(long I_nativeObj);

    // C++: static void unsharpMask(vpImage_char I, int size = 7, double weight = 0.6)
    private static native void unsharpMask_0(long I_nativeObj, int size, double weight);
    private static native void unsharpMask_1(long I_nativeObj);

    // C++: static void unsharpMask(vpImage_char I, vpImage_char Ires, int size = 7, double weight = 0.6)
    private static native void unsharpMask_2(long I_nativeObj, long Ires_nativeObj, int size, double weight);
    private static native void unsharpMask_3(long I_nativeObj, long Ires_nativeObj);

    // C++: static void unsharpMask(vpImage_vpRGBa I, int size = 7, double weight = 0.6)
    private static native void unsharpMask_4(long I_nativeObj, int size, double weight);
    private static native void unsharpMask_5(long I_nativeObj);

    // C++: static void unsharpMask(vpImage_vpRGBa I, vpImage_vpRGBa Ires, int size = 7, double weight = 0.6)
    private static native void unsharpMask_6(long I_nativeObj, long Ires_nativeObj, int size, double weight);
    private static native void unsharpMask_7(long I_nativeObj, long Ires_nativeObj);

	
// C++: static void reconstruct(vpImage_char marker, vpImage_char mask, vpImage_char I, vpImageMorphology_vpConnexityType connexity = vpImageMorphology::CONNEXITY_4)
	private static native void reconstruct(long marker_nativeObj, long mask_nativeObj, long I_nativeObj);
	
	// C++: static void fillHoles(vpImage_char I, vpImageMorphology_vpConnexityType connexity = vpImageMorphology::CONNEXITY_4)
	private static native void fillHoles(long I_nativeObj);

	
	
// C++: static void floodFill(vpImage_char I, vpImagePoint seedPoint, char oldValue, char newValue, vpImageMorphology_vpConnexityType connexity = vpImageMorphology::CONNEXITY_4)
	private static native void floodFill(long I_nativeObj, double seedPoint_i, double seedPoint_j, char oldValue, char newValue);

	
}
