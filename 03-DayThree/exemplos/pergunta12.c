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
	int i;
	
	printf("digite");
	scanf("%d",&a.x);
	printf("digite");
	scanf("%d",&a.y);
        printf("digite");
	scanf("%d",&b.x);
	printf("digite");
	scanf("%d",&b.y);
	
	d = dist(a,b);
	printf("distancia : %d",d);

	
	return 0;
}
