#include<stdio.h>
#include<stdlib.h>
void readArray(int array[], int size){
	int x;
	for(x = 0 ; x < size; x++){
		array[x] = rand()%50;
	}
}
void showArray(int array[], int size){
	int x;
	for(x = 0 ; x < size; x++){
		printf("\t[%d]",array[x]);
	}
}
void findElementsPrimos(int array[], int size){
	int x;
	for(x = 0; x < size;x++){
		if(array[x]%2 != 0 &&array[x]%array[x] == 0){
			printf("\nPrimo encontrado na posicao [%d]",x);
		}
	}
}
int main(){
	int size;
	printf("\nDigite a quantidade de numeros : ");
	scanf("%d",&size);
	int vetor[size];
	readArray(vetor,size);
	showArray(vetor,size);
	findElementsPrimos(vetor,size);
	
}
