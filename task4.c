#include <stdio.h>

void n_to_zero(int n, int a){
	if(a <= n){
		printf("%d ", a);
		return n_to_zero(n, ++a);
	}
	printf("\n");
}

int main(){
	int a = 0;
	int n = 0;
	scanf("%d", &n);
	n_to_zero(n, a);
}

