#include <stdio.h>

#include <math.h>

typedef struct{
	int x;
	int y;
}ponto;

int dist(ponto a, ponto b){
	int d;
	d= sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2));
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
