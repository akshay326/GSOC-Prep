## Building ViSP for Android

I'm beginning with comparing OpenCV's cmake files and that of ViSP. I guess I need to add
Android build flags in ViSP's cmake as there were in OpenCV.
Finally I'll try to build only one ViSP module(as of now) for android

#### OpenCV cmake files that have android build flags
Equivalent of these files (if exists) have to be edited for ViSP too 

| Cmake File | Status        |
| ---------- | ------------- |
| CMakeLists.txt | to be edited | 
| cmake/OpenCVModule.cmake | to be edited | 
| cmake/OpenCVGenConfig.cmake | to be edited | 
| cmake/OpenCVGenPkgConfig.cmake | to be edited | 
| cmake/OpenCVGenAndroidMK.cmake | to be edited | 
| cmake/OpenCVFindIPPIW.cmake | **NA** |
| cmake/OpenCVFindIPP.cmake | **NA**
| cmake/OpenCVCompilerDefenses.cmake | **NA**. Has some *-D_FORTIFY_SOURCE=2* flag.  
| cmake/OpenCVCompilerOptions.cmake | May be this is visp/AddExtraCompilationsFlags.cmake 
| cmake/OpenCVFindLibsGrfmt.cmake | to be edited | 
| cmake/OpenCVFindVA_INTEL.cmake | **NA**
| cmake/OpenCVFindVA.cmake | **NA**
| cmake/OpenCVDetectAndroidSDK.cmake | some ocv_* macros to be added| 
| cmake/OpenCVDetectCUDA.cmake | **NA**. ViSP has no integrations for CUDA support
| cmake/OpenCVDetectPython.cmake | **NA**. ViSP not in Python

A few templates to be created
-  templates/OpenCV.mk.in
-  templates/OpenCVConfig-ANDROID.cmake.in
-  templates/OpenCVConfig-ANDROID.cmake.in
-  templates/OpenCVConfig-ANDROID.cmake.in
-  templates/OpenCVConfig.cmake.in
-  templates/OpenCVConfig.cmake.in
-  templates/OpenCVConfig.root-ANDROID.cmake.in
-  templates/OpenCVConfig.root-ANDROID.cmake.in 


#### ViSP cmake files (not found in OpenCV cmake folder) which will be edited
I haven't found such a file yet.  
But since ViSP has additional third party libraries, we may have to edit(or often remove) few 3rd party libraries. 