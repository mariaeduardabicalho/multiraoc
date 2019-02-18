#include <stdio.h>

void media(double arr[],int n){
	int s;
	int soma;
	int m;
	for(s=0;s<n;s++){
		soma+= arr[s];	
	}
	m= s/n;
	printf("a media eh: %d", m);
}




int main(){
	int n;
	int i;
	double nf;
	
	printf("Digite um numero ");
	scanf("%d",&n);

	double vetor[n];
	
	for(i=0;i<n;i++){
		printf("Digite um numero ");
		scanf("%lf",&nf);
		printf("\n");
		vetor[i]= nf;
		
	}
	
	media(vetor,n);
	
	return 0;
}
