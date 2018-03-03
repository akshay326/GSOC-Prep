#include "hello.h"

/**
 * Simple Program That returns Hello World message `a` times
 * @param a The number of times to print
 * @return Resultant concatenated string
 */
std::string hello(int a) {
    std::string res;

    while(a>0) {
        res += "Hello, World!\n";
        --a;
    }

    return res;
}