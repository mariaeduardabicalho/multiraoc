#include <stdio.h>

typedef struct{
	int x;
	int y;
}ponto;

int dist(ponto a, ponto b){
	int d;
	d= (a.x-b.x)+(a.y-b.y);
	return d;
}


int main(){
	ponto a;
	ponto b;
	int d;
	
	a.x=1;
	a.y=1;
	b.x=1;
	b.y=1;
	
	d = dist(a,b);
	
	printf("distancia : %d",d);

	
	return 0;
}
