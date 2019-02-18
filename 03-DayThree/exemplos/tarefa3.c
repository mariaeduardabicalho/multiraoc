#include <stdio.h>


double soma(double arr[],int n){
	double s = 0;
	if (n>0){
		for (int i = 0; i<n;i++){
			s+=arr[i];
		}
	}
	return s;	
}

int main(){

double vetor[] = {1,1,1,1};

double r = soma(vetor,4);

printf("a soma do vetor : %lf", r);

	
}
