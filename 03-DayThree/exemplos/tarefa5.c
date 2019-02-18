#include <stdio.h>
#include <math.h>


 double media(double arr[],int n){
	int s;
	double soma;
	int m;
	for(s=0;s<n;s++){
		soma+= arr[s];	
	}
	m= s/n;
	//printf("a media eh: %d", m);
	return m;

}

void varia(double arr[],int n,double m){
	int s;
	double soma;
	double variancia;

	
	for(s=0;s<n;s++){
		soma+= arr[s]-m;	
	}
	
	soma = soma*soma;

	variancia= soma/(n-1);
	
	printf("a variancia eh: %lf",variancia);
		
}


int main(){
	int n;
	int i;
	double nf;
	double med;
	
	printf("Digite um numero ");
	scanf("%d",&n);

	double vetor[n];
	
	for(i=0;i<n;i++){
		printf("Digite um numero ");
		scanf("%lf",&nf);
		printf("\n");
		vetor[i]= nf;
		
	}
	
	med = media(vetor,n);
	printf("a media eh: %lf", med);
	
	varia(vetor,n,med);
	
	return 0;
}
