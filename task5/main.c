#include <stdio.h>

void arr_hert(int, int*, int);

int main(){
	int a = 0;
	int n = 5;
	int arr[n] = {};
	for(int i = 0; i < n; ++i){
		scanf("%d", &arr[i]);
	}
	arr_hert(n, arr, a);
}
