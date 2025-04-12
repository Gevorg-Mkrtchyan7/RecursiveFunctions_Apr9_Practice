#include <stdio.h>

void min_max(int, int*, int, int);

int main(){
	int n = 5;
	int arr[n] = {};
	for(int i = 0; i < n; ++i){
		scanf("%d", &arr[i]);
	}
	int min = arr[0];
	int max = arr[0];
	min_max(--n, arr, min, max);
}
