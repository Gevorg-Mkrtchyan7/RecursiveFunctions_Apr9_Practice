#include <stdio.h>

int digits_sum(int n, int a){
	if(n > 0){
		a += n % 10;
		return digits_sum(n / 10, a);
	}else{
		return a;
	}
	return 0;
}

int main(){
	int a = 0;
	int n = 0;
	scanf("%d", &n);
	digits_sum(n, a);
}

