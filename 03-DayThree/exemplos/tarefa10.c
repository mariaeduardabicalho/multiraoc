#include <stdio.h>

void troca(char str[200]){
	int i;
	for (i=0;i<'\0';i++){
		if(str[i]>=97 && str[i]<123){
			str[i]= str[i] - 32;
		}
	}
}

int main(){
	char strg[200] = "oi 3 tudo";
	troca(strg);
	printf(strg);
	
	


return 0;
}
