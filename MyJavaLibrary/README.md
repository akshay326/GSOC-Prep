## Simple Java Library

Java Library build with gradle. Has a single method ``` hello(int i) ```, which returns ```Hello World ...``` **i** times.
Also has a test method in Test section, LibraryTest.java

Referred from: https://guides.gradle.org/building-java-libraries/

### Building the Library
+ Use ```./gradlew build --status``` to start build
+ The Jar File will be under ```<root>/build/libs/```
+ See the test outputs at ```<root>/build/reports/tests/test/index.html```