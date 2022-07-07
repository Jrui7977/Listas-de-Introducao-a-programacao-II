#include<stdio.h>
#include<stdlib.h>
void readArray(int array[], int size){
	int x;
	for(x = 0 ; x < size; x++){
		array[x] = rand()%50;
	}
}
int findElement(int array[], int size, int number){
	int x, cont = 0;
	for(x = 0; x < size;x++){
		if(array[x] == number){
			cont++;
		}
	}
	return cont;
}
void showArray(int array[], int size){
	int x;
	for(x = 0 ; x < size; x++){
		printf("\t[%d]",array[x]);
	}
}
int main(){
	int vet[50];
	int number;
	int value;
	printf("\nDigite um numero : ");
	scanf("%d",&number);
	readArray(vet,50);
	showArray(vet,50);
	value = findElement(vet,50,number);
	if(value == 0){
		printf("\nO numero nao foi encontrado ");
	}else
		printf("\nO numero foi encontrado [%d]vezes",value);
	
	
}
