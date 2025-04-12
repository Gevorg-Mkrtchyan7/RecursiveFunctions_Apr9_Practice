#include <stdio.h>

void n_to_zero(int n){
	if(n >= 0){
		printf("%d ", n);
		return n_to_zero(--n);
	}
	printf("\n");
}
