#include <stdlib.h>
#include <stdio.h>

int compare(const void *a, const void *b){
	return *(int*)a-*(int*)b;
}

int is_sorted(int *numbers,int n){
	int last = numbers[-1];
	for(int i = 0; i < n; i++){
		if(last > numbers[i]){
			return 0;
		}
		last = numbers[i];
	}
	return 1;
}

int main(int argc, char *argv[]){
	int n = 1000;
	if(argc > 1){
		n = atoi(argv[1]);
	}

	int numbers[n];
	
	srand(12);
	for(int i = 0; i < n; i++){
		numbers[i] = rand();
	}

	qsort(numbers, n, sizeof(int), compare);

	if(n <= 10){
		for(int i = 0; i < n; i++){
			printf("%d,", numbers[i]);
		}
	}
	
	printf("n:%d, sorted:%d \n", n, is_sorted(numbers, n));
}

