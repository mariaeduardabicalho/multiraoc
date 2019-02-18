#include <stdio.h>


void ss(int a, int b,int *sum,int *sub){

	*sum= a+b;
	*sub=a-b;
	

}



int main(){
	int a;
	int b;
	int soma;
	int subt;

	
	printf("digite um numero:");
	scanf("%d",&a);
	printf("digite um numero:");
	scanf("%d",&b);
	
	ss(a,b,&soma,&subt);

	printf("soma: %d",soma);
	printf("sub: %d",subt);
	
	
}
