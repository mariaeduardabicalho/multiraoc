#include <stdio.h>


typedef struct{
	int x;
	int y;
}ponto;

int medio(ponto a,ponto b, ponto *m){
	int pm;
	if (a.x == b.x && a.y == b.y){
		return 0;
		
	}
	else{
		m -> x = (a.x-b.x)/2;
		m -> y = (a.y-b.y)/2;
		return 1;
		
	}
	
}

int main(){
	ponto a;
	ponto b;
	ponto c;
	int r;
	
	a.x=1;
	a.y=1;
	b.x=3;
	b.y=3;
	
	r= medio(a,b,&c);

	printf("valido %d\n",r);
	printf("x ponto medio %d\n",c.x);
	printf("y ponto medio %d\n",c.y);

return 0;
	
}
