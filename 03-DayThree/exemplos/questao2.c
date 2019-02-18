






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

