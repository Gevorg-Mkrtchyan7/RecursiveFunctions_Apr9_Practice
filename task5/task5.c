#include <stdio.h>

void arr_hert(int n, int arr[], int a){
	if(a < n){
		printf("%d ", arr[a]);
		return arr_hert(n, arr, ++a);
	}
	printf("\n");
}
