# Proposal for GSOC: Porting ViSP to Android Devices

Currently in the repo u'll find basic examples - like creating a package and importing it. 

## Generating .so files for diff Android Architectures
Just make your project in Android NDK and all .so files(each for an arch) will be generated in ```/app/build/intermediates/cmake/debug/``` folder.

## Building libraries in Android
Begin from example in ```AndroidCMake``` directory.
