#include <stdio.h>

int min_max(int a, int arr[], int min, int max){
	if(a >= 0){
		if(min > arr[a]){
			min = arr[a];
		} 
		if(max < arr[a]){
			max = arr[a];
		}
		return min_max(--a, arr, min, max);
	}
	return min;
	return max;
}
