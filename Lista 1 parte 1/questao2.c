#include<stdio.h>

int main(){
	int x, vet[10],y = 1;
	for(x = 0; x < 10;x++){
		vet[x] = y;
		y = y+2;
	}
	for(x = 0; x < 10;x++){
		printf("\n%d",vet[x]);
	}
}
