#include <stdio.h>


int str1(char str[]){
	int i =0;
	int q = 0;
	while ( strg[i] != '\0'){
		if(str[i] == 1){
			q++;
		}
	}
	return q;
}


int main(){
	
	char strg[]= "tenho 1";
	int qnt = str1(strg);
	printf("aparece:%d",qnt)


	return 0;
}
