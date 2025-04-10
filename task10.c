#include <stdio.h>

void min_max(int n, int arr[], int min, int max){
	if(n >= 0){
		if(min > arr[n]){
			min = arr[n];
		} 
		if(max < arr[n]){
			max = arr[n];
		}
		return min_max(--n, arr, min, max);
	}
	printf("%d %d \n", min, max);
}

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
