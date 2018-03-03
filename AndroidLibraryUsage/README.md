# Sample Android Library Usage Example

## Add your library as a dependency
+ To use your Android library's code in another app module, proceed as follows:

+ - Import the library module to your project (the library source becomes part of your project):
+ - Click File > New > Import Module.
+ - Enter the location of the library module directory then click Finish. The library module is copied to your project, so you can actually edit the library code.

+ Make sure the library is listed at the top of your settings.gradle file, as shown here for a library named "my-library-module":
```
include ':app', ':my-library-module'
```
+ Open the app module's build.gradle file and add a new line to the dependencies block as shown in the following snippet:
``` java
dependencies {
    compile project(":my-library-module")
}
```
+ Click Sync Project with Gradle Files.
In this example above, the compile configuration adds the library named my-library-module as a build dependency for the entire app module. If you instead want the library only for a specific build variant, then instead of compile, use buildVariantNameCompile. For example, if you want to include the library only in your "pro" product flavor, it looks like this:

```
productFlavors {
    pro { ... }
}
dependencies {
    proCompile project(":my-library-module")
}
```
Any code and resources in the Android library is now accessible to your app module, and the library AAR file is bundled into your APK at build time.

However, if you want to share your AAR file separately, you can find it in project-name/module-name/build/outputs/aar/ and you can regenerate it by clicking Build > Make Project.


