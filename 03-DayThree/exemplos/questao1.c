#include <stdio.h>

#define MAXH 640
#define MAXW 480

typedef struct{
	int w;
	int h;
	int mat[MAXW][MAXH];
}imagem;


void le_imagem(imagem p){
	int i;
	int j;
	for(i=0;i<p.h;i++){
		for(j=0;j<p.w;j++){
			scanf("%d",&p.mat[i][j]);
			printf("%d\n",p.mat[i][j]);
		}
	}	
}

int main(){
	
	imagem foto;
	foto.mat[MAXW][MAXH];

	char t[4];
	int w;
	int h;
	int p;
	
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

	le_imagem(foto);
	
return 0;	
	
}

