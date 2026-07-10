#include <felixlib.h>
#include <stdio.h>

int main(int agrc, char* argv[]){
    int res = add_ten(1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
    printf("add 10 result: %i\n", res);
    return res;
}
