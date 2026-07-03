#include <stdio.h>

#if defined(__aarch64__) || defined(__arm__)
    #define ARCH_NAME "ARM"
#elif defined(__x86_64__)
    #define ARCH_NAME "x86"
#else
    #define ARCH_NAME ":("
#endif

void greet() {
    printf("hello from %s!\n", ARCH_NAME);
}

