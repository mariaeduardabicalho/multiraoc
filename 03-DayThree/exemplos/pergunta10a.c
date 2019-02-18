#include <stdio.h>


void p_a(int a, int l,int *p, int *ar){
	*p= 2*a+2*l;
	*ar= a*l;	
}


int main(){
	int al;
	int la;
	int pe;
	int ar;
	
	printf("digite um numero");
	scanf("%d",&al);
	printf("digite um numero");
	scanf("%d",&la);

	p_a(al,la,&pe,&ar);
	
	printf("area: %d\n",ar);
	printf("perimetro %d\n",pe);

return 0;	
}
