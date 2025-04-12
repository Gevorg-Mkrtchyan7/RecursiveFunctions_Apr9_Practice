#include <stdio.h>
#include <stdlib.h>

char capital_letter(int i, char str[]){
	if(i < 20){	
		if(str[i] > 64 && str[i] < 91){
			return str[i];
			exit(-1);
		}else{
			return capital_letter(++i, str);
		}
	}
	return 0;
}
