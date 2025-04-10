#include <stdio.h>

void arr_hakarak(int n, int arr[]){
	if(n >= 0){
		printf("%d ", arr[n]);
		return arr_hakarak(--n, arr);
	}
	printf("\n");
}

int main(){
	int n = 5;
	int arr[n] = {};
	for(int i = 0; i < n; ++i){
		scanf("%d", &arr[i]);
	}
	arr_hakarak(--n, arr);
}

