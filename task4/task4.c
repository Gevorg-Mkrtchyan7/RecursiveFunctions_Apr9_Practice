#include <stdio.h>

void n_to_zero(int n, int a){
	if(a <= n){
		printf("%d ", a);
		return n_to_zero(n, ++a);
	}
	printf("\n");
}
