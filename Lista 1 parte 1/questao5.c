#include<stdio.h>
#include<stdlib.h>
void readArray(int array[], int size){
	int x;
	for(x = 0 ; x < size; x++){
		array[x] = rand()%20;
	}
}
int multiply(int array[],int size, int k){
	int x;
	for(x = 0 ; x < size; x++){
		array[x] = array[x]*k;
	}
}
void showArray(int array[], int size){
	int x;
	for(x = 0 ; x < size; x++){
		printf("\t[%d]",array[x]);
	}
}
int main(){
	int vet[20];
	readArray(vet,20);
	showArray(vet,20);
	printf("\n\n");
	multiply(vet,20,10);
	showArray(vet,20);
}
