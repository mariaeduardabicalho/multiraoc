#include <stdio.h>

#define MAXW 512
#define MAXH 512

void le_imagem(int mat[MAXW][MAXH],int w,int h){
	int i;
	int j;
	for(i=0;i<h;i++){
		for(j=0;j<w;j++){
			scanf("%d",&mat[i][j]);
			printf("%d\n",mat[i][j]);
		}
	}
	
}


int main(){
	int matriz[MAXW][MAXH];
	char t[4];
	int w;
	int h;
	int p;
	
	fgets(t,4,stdin);
	scanf("%d",&w);
	scanf("%d",&h);
	scanf("%d",&p);
	
	printf(t);
	printf(" %d",w);
	printf(" %d\n",h);
	printf(" %d\n",p);

	le_imagem(matriz,w,h);
	
return 0;	
	
}
