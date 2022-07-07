#include<stdio.h>
#include<stdlib.h>
int mostraVetor(int n){
	if(n%2 != 0){
		return 0;
	}else{
	int x,vetor[n];
	printf("\nBloco A : ");
	for(x = 0; x<n;x++){
		vetor[x] = rand()%100;
		printf("\t[%d]",vetor[x]);
		if(x == (n/2)-1){
			printf("\nBloco B: ");
			printf("\t[%d]",vetor[x]);
			}
		}
	}
}
int main(){
	mostraVetor(8);
}
