#include <stdio.h>

void arr_hakarak(int, int*);

int main(){
	int n = 5;
	int arr[n] = {};
	for(int i = 0; i < n; ++i){
		scanf("%d", &arr[i]);
	}
	arr_hakarak(--n, arr);
}
