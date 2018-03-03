# Sample Java only Android Library
Referred from: [https://developer.android.com/studio/projects/android-library.html]

## Diff b/t AAR and JAR
Unlike JAR files, AAR files can contain Android resources and a manifest file, which allows you to bundle in shared resources like layouts and drawables in addition to Java classes and methods.

## Convert an app module to a library module
If you have an existing app module with all the code you want to reuse, you can turn it into a library module as follows:

+ Open the module-level build.gradle file.
+ Delete the line for the __applicationId__. Only an Android app module can define this.
+ At the top of the file, you should see the following:
```apply plugin: 'com.android.application'```  
Change it to the following:  
```apply plugin: 'com.android.library'```
+ Save the file and click Tools > Android > Sync Project with Gradle Files.

That's it. The entire structure of the module remains the same, but it now operates as an Android library and the build will now create an AAR file instead of an APK.

When you want to build the AAR file, select the library module in the Project window and then click Build > Build APK. It'll be in ```app/build/outputs/aar/```.

