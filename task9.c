#include <stdio.h>
#include <stdlib.h>

void capital_letter(int i, char str[]){
	if(str[i] > 64 && str[i] < 91){
		printf("%c \n", str[i]);
		exit(-1);
	}
	return capital_letter(++i, str);
}

int main(){
	int i = 0;
	char str[100] = {};
	scanf("%s", str);
	capital_letter(i, str);
}

