# GSOC Proposal for ViSP Organization

Hi. I'm Akshay Sharma, Mathematics and Computing undergraduate at Indian Institute of Technology,
Varanasi. I'm proposing to offer the ViSP community an SDK for Android, briefly:

+ Build scripts
+ Adapting existing files
+ Documentation 
+ Tutorials and Videos
+ Executables 

### Build Scripts
These are used to build the SDK on 
+ `android.toolchain.cmake` file, adapted for ViSP build and `install.sh` script for building 
the SDK on Unix systems using bash command line
+ `build_sdk.py` file and allied python service test scripts, like `test_ndk.py`

### Adapting Existing files
Since ViSP wasn't initially targeted for android system, a good number of files need editing
+ Adding build flags for the files in the `cmake` folder, including `CMakeLists.txt`
+ Improving the existing ViSP source code to work on android environment
+ Addition of appropriate methods or classes, whenever required to resolve an issue
+ Addition of sample templates under the `cmake/template` folder

### Providing Doxygen Documentation
To each method added or adapted, both in Java and C++, I'll provide either an inline or block 
documentation
+ Explaining the changes made in the `cmake` files
+ Explaining the changes made in the existing source code
+ Corresponding domentation for any function or class added, in java or cpp, with argument 
description
+ Appropriate comments for the logic in tutorials
+ Any `TODO` or `FIXME` for future edits/improvements

### Tutorials and Videos
All the tutorials will be added to existing tutorials in a dedicated section called "ViSP for Android". Alongwith source code, they will include appropriate readme's or `.md` files. These will address topics like:
+ How to build ViSP Android SDK from source code.
+ How to use an Android live camera, convert images in ViSP `vpImage` data and apply simple image processing algorithms part of the `imgproc` module
+ How to interact with the user to initialise an algorithm. A good example would be the selection from the touch screen of a region of interest used to start a blob tracking and display the result of the tracking (position of the cog, roi...)
+ Detect one or more Apriltags using `vpDetectorApriltag` class, display the position of the tag in overlay  

During the final stage of evalaution, I'll try to demonstrate or provide Walkthrough videos (on YouTube) for above tutorials. 

### Executables
Executable will include
+ Sample android `.apk` for each tutorial specified above
+ Prebuilt SDK containing native ViSP libraries built for android(the `.so` or `.a` files), java code and 3rd party libraries.

### Evaluation Benchmarks
I expect to complete the following milestones, in chronological order during each phase 
 
| Phase | Deliverables | 
| ----- | ------------ |
May 14 - June 8, 2018 | 1. Building ViSP library using NDK <br> 2. `imgproc` module demo in android
June 18 - July 6, 2018 | 1. Wrapper JNI/Java code for native C++ functions <br> 
July 16 - August 6, 2018 | A pull request delivering the following: <br> 1. Full Doxygen documentation <br> 2. Tutorial and demos <br> 3. Sample executables  
