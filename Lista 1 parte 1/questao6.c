#include<stdio.h>
#include<stdlib.h>
void readArray(int array[], int size){
	int x;
	for(x = 0 ; x < size; x++){
		array[x] = rand()%100;
	}
}
int findebig(int array[],int size){
	int x;
	int big = 0;
	for(x = 0; x < size;x++){
		if(array[x]>=array[big]){
			big = x;
		}
	}
	return big;
}
void showArray(int array[], int size){
	int x;
	for(x = 0 ; x < size; x++){
		printf("\t[%d]",array[x]);
	}
}
int main(){
	int bigValue = 0, size = 100;
	int vet[size];
	readArray(vet,size);
	showArray(vet,size);
	findebig(vet,size);
	bigValue = findebig(vet,size);
	printf("\n\n O maior valor esta na posicao : %d ",bigValue);
	
}
