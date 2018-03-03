package example.hello;

import org.junit.Test;

public class LibraryTest {
    @Test public void testSomeLibraryMethod() {
        HelloWorld classUnderTest = new HelloWorld();
        assert(classUnderTest.hello(1).equals("Hello World \t"));
        assert(classUnderTest.hello(0).equals(""));
    }
}