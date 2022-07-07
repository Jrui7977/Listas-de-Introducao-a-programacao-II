#include<stdio.h>
int verifyPalindrome(int vet[], int size){
	int x, y = size-1, cont = 0;
	for(x = 0; x < size; x++){
		if(vet[x] == vet[y]){
			cont++;
			y--;
		}
	}
	return cont;
}
int main(){
	int size,value= 0;
	int x;
	printf("\nDigite o tamanho do palindromo : ");
	scanf("%d",&size);
	int array[size];
	for(x = 0; x < size;x++){
		printf("\nDigite o numero : ");
		scanf("%d",&array[x]);
	}
	value = verifyPalindrome(array,size);
	if(value == size){
		printf("\nE um palindromo !");
	}else
		printf("\nNao e um palindromo!");
	
}
