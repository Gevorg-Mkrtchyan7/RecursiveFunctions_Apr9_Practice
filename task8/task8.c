#include <stdio.h>

void binary(int n){
	if(n == 0){
		return;
	}else{
		binary(n / 2);
		printf("%d", n % 2);
	}
} 
