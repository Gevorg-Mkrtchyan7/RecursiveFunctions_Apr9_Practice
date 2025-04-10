#include <stdio.h>

void n_to_zero(int n){
	if(n => 0){
		printf("%d ", n);
		return n_to_zero(--n);
	}
	printf("\n");
}

int main(){
	int n = 0;
	scanf("%d", &n);
	n_to_zero(n);
}
