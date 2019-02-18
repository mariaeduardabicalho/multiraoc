#include <stdio.h>


int str1(char str[]){
	int i =0;
	int q = 0;
	while ( str[i] != '\0'){
		if(str[i] =='1'){
			q++;
		}
		i++;
	}
	return q;
}


int main(){
	
	char strg[]= "1";
	int qnt = str1(strg);
	printf("aparece:%d",qnt);


	return 0;
}
