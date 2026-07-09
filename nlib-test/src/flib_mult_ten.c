#include <felixlib.h>
#include <stdio.h>

int main(int agrc, char* argv[]){
	double res = mult_ten(1.1,1.1,1.1,1.1,1.1,1.1,1.1,1.1,1.1,1.1);
	printf("mult 10 (1.1^10) result: %f, should be ~2.5937\n", res);
	return 0;
}
