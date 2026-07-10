#include <felixlib.h>
#include <stdio.h>

int main(int agrc, char* argv[]){
    double res = mult_ten(1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2.0);
    printf("mult 10 (1.1^10) result: %f\n", res);
    return 0;
}
