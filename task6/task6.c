#include <stdio.h>

void arr_hakarak(int n, int arr[]){
	if(n >= 0){
		printf("%d ", arr[n]);
		return arr_hakarak(--n, arr);
	}
	printf("\n");
}
