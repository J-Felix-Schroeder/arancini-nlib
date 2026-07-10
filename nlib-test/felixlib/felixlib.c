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


double double_double(double a){
    greet();
    return a*2;
}

float double_float(float a){
    greet();
    return a*2;
}

int add_ten(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10){
    greet();
    printf("adding %d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n", a1, a2, a3, a4, a5, a6, a7,
           a8, a9, a10);
    return a1+a2+a3+a4+a5+a6+a7+a8+a9+a10;
}

double mult_ten(double a1, double a2, double a3, double a4, double a5, double a6, double a7, double a8, double a9, double a10){
    greet();
    printf("multiplying %f,%f,%f,%f,%f,%f,%f,%f,%f,%f\n", a1, a2, a3, a4, a5,
           a6, a7, a8, a9, a10);
    return a1*a2*a3*a4*a5*a6*a7*a8*a9*a10;
}
