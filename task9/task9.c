#include <stdio.h>
#include <stdlib.h>

void capital_letter(int i, char str[]){
	if(i < 20){	
		if(str[i] > 64 && str[i] < 91){
			printf("%c \n", str[i]);
			exit(-1);
		}else{
			return capital_letter(++i, str);
		}
	}
	printf("chka \n");
}
