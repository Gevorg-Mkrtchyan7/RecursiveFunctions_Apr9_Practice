#include <stdio.h>

int min_max(int, int*, int, int);

int main(){
	int a = 5;
	int arr[a] = {};
	for(int i = 0; i < a; ++i){
		scanf("%d", &arr[i]);
	}
	int min = arr[0];
	int max = arr[0];
	min_max(--a, arr, min, max);
}
