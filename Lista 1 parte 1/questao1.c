#include<stdio.h>
#include<stdlib.h>
int main(){
	int x, vet[12],number1,number2, position1, position2;
	for(x = 0; x < 12; x++){
		printf("\nValor %d : ",x+1);
		scanf("%d",&vet[x]);
	}
	printf("\nDigite valor 1 e valor 2 : ");
	scanf("%d %d",&number1, &number2);
	for(x = 0 ; x < 12;x++){
		if(vet[x] == number1){
			position1 = x;
		}
		if(vet[x] == number2){
			position2 = x;
		}
	}
	printf("\nA soma dos dois valores eh : %d",vet[position1]+vet[position2]);
}

