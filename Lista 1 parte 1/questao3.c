#include<stdio.h>
#include<stdlib.h>
int main(){
	int vet[40],x,cont = 0 ;
	for(x = 0; x < 40;x++){
		vet[x] = rand()%100;
	}
	for(x = 0; x < 40 ; x++){
		if(vet[x]%2 == 0){
			cont++;
			printf("\n[%d]",vet[x]);
		}
	}
	printf("\n Valores pares : %d",cont);
}
