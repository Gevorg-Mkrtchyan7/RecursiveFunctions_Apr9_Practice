#include <stdio.h>

void arr_hert(int n, int arr[], int a){
	if(a < n){
		printf("%d ", arr[a]);
		return arr_hert(n, arr, ++a);
	}
	printf("\n");
}

int main(){
	int a = 0;
	int n = 5;
	int arr[n] = {};
	for(int i = 0; i < n; ++i){
		scanf("%d", &arr[i]);
	}
	arr_hert(n, arr, a);
}

