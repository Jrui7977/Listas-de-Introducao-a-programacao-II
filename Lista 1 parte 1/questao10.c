#include<stdio.h>
#include<stdlib.h>
void readArray(int array[], int size){
	int x;
	for(x = 0 ; x < size; x++){
		array[x] = rand()%100;
	}
}
void showArray(int array[], int size){
	int x;
	for(x = 0 ; x < size; x++){
		printf("\t[%d]",array[x]);
	}
}
int findRepeatedElements(int array[], int size){
	int x,y,cont = 0, number, aux = 0 ;
	for(x = 0; x < size; x++){
		for(y = x+1; y< size; y++){
			if(array[x] == array[y]){
				cont++;
			}
			if(cont > 0){
				aux = 1;
			}else
				aux = 0;
		}
		if(aux == 1){
			printf("\nElemento repetido : %d %d vezes", array[x],cont);
		}
		cont = 0;
	}
}
int main(){
	int size = 100 ,vet[size];
	readArray(vet,size);
	showArray(vet,size);
	findRepeatedElements(vet,size);
	
}
