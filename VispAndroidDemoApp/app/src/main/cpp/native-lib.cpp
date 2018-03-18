#include <jni.h>
#include <android/log.h>
#include <android/bitmap.h>

#include <visp3/core/vpImageTools.h>
#include <visp3/imgproc/vpImgproc.h>

#define  LOG_TAG    "** VISP **"
#define  LOGE(...)  __android_log_print(ANDROID_LOG_ERROR,LOG_TAG,__VA_ARGS__)

static void transpose(AndroidBitmapInfo *info, void *pixels){
    for (int yy = 0; yy < info->height; yy++) {
        uint16_t *line = (uint16_t *) pixels;
        uint16_t *line_end = line + info->width;

        while (line < line_end) {
//            Swapping
//            *line = *line ^ *line_end;
//            *line_end = *line ^ *line_end;
//            *line = *line ^ *line_end;

//            Getting R,G,B values
//            ((*line & 0xF800) >> 11)<<3
//            ((*line & 0x7E0) >> 5)<<2
//            (*line & 0x1F)<<2
            *line = (uint16_t) (((((*line & 0xF800) >> 11) << 3) + \
                        (((*line & 0x7E0) >> 5) <<2) + \
                        (*line & 0x1F) << 2) / 3);
            ++line;
//            --line_end;
        }
    }
}

extern "C"
JNIEXPORT void JNICALL
Java_example_vispapriltag_MainActivity_processImage(JNIEnv *env, jclass type, jobject bitmap) {

    AndroidBitmapInfo info;
    void *pixels;
    int ret;

    if ((ret = AndroidBitmap_getInfo(env, bitmap, &info)) < 0) {
        LOGE("AndroidBitmap_getInfo() failed ! error=%d", ret);
        return;
    }

    if ((ret = AndroidBitmap_lockPixels(env, bitmap, &pixels)) < 0) {
        LOGE("AndroidBitmap_lockPixels() failed ! error=%d", ret);
    }

    LOGE("Pixel start before: %d",*((uint16_t *) pixels));

    vpImage<uint16_t> I;
    I.init(((uint16_t *) pixels),info.width,info.height, false);
//    vpImageTools::flip(I);

//    transpose(&info, pixels);

    AndroidBitmap_unlockPixels(env, bitmap);

    pixels = I.bitmap;

    LOGE("Pixel start after: %d",*((uint16_t *) pixels));


}