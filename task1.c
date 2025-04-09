#include <stdio.h>
#include <stdlib.h>

int fib(int n){
	if(n < 0){
		exit(-1);
	}else if(n < 2){
		return n;
	}
	return fib(n - 1) + fib(n - 2);
}

int main(){
	int n = 0;
	scanf("%d", &n);
	fib(n);
}
