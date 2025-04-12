#include <stdio.h>

int min_max(int n, int arr[], int min, int max){
	if(n >= 0){
		if(min > arr[n]){
			min = arr[n];
		} 
		if(max < arr[n]){
			max = arr[n];
		}
		return min_max(--n, arr, min, max);
	}
	return min;
	return max;
}
