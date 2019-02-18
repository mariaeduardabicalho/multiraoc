#include <stdio.h>

#define MAXH 640
#define MAXW 480

typedef struct{
	int w;
	int h;
	int mat[MAXW][MAXH];

}imagem;


void limiar(imagem p,imagem *nova){

	int i;
	int j;
	for(i=0;i<p.h;i++){
		for(j=0;j<p.w;j++){
			scanf("%d",&p.mat[i][j]);
			if(p.mat[i][j] >127){
				nova-> mat[i][j] =255;
				
			}
			else{
				nova-> mat[i][j]= 0;
			}
		}
	}	
	
}

int main(){

	imagem foto;
	imagem nova_foto;
	foto.mat[MAXW][MAXH];

	char t[4];
	int w;
	int h;
	int p;
	int i;
	int j;
	
	fgets(t,4,stdin);
	scanf("%d",&w);
	scanf("%d",&h);
	scanf("%d",&p);

	foto.w=w;
	foto.h=h;
	
	printf(t);
	printf(" %d",w);
	printf(" %d\n",h);
	printf(" %d\n",p);
	
	limiar(foto,&nova_foto);
	for(i=0;i<h;i++){
		for(j=0;j<w;j++){
			printf("%d\n",nova_foto.mat[i][j]);
		}
	}

	return 0;
}
