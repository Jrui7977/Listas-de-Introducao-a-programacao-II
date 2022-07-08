#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float standart(int array[], int size){
	int x;
	float sum = 0,aux = 0;
	float media = 0;
	for(x = 0; x < size; x++){
		sum = sum + array[x];
	}
	media = sum/size;
	for(x = 0; x < size; x++){
		aux = aux + pow(array[x]-media,2);
	}
	return sqrt(aux/size);
}
void read_array(int array[], int size){
	int x;
	for(x = 0; x < size; x++){
		printf("\nDigite o valor %d : ",x+1);
		scanf("%d",&array[x]);
	}
}
int main(){
	int size;
	float value = 0;
	printf("\nDigite o tamanho do vetor : ");
	scanf("%d",&size);
	int array[size];	
	read_array(array,size);
	value = standart(array,size);
	printf("\nO valor obtido : %f",value);
}
