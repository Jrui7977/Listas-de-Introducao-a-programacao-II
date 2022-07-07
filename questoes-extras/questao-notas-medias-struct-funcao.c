#include<stdio.h>
typedef struct{
	float exam[3];
	char name[16];
	
}classe;
int read(classe vet[], int size){
	int i,x;
	for(i = 0; i < size; i++){
		printf("\nDigite o nome do aluno : ");
		scanf("%s",vet[i].name);
		for(x = 0; x < 3;x++){
			printf("\nDigite a %d nota : ",x+1);
			scanf("%f",&vet[i].exam[x]);
		}
	}
}
int show(classe vet[],int size){
	int i,x;
	float sum = 0;
	for(i = 0; i < size; i++){
		printf("\nNome do aluno  %s | ",vet[i].name);
		for(x = 0; x < 3;x++){
			sum = sum + vet[i].exam[x];
			printf("nota %d:[%.2f] | ",x+1,vet[i].exam[x]);
		}
		printf("Media : %.2f",sum/3);
		sum = 0;
	}
}
int findbig(classe vet[], int size){
	int x, y, big = 0, position = 0, sum = 0;
	for(x = 0; x < size; x++){
		for(y = 0; y < 3; y++){
			sum = sum + vet[x].exam[y];
		}
		sum = sum/3;
		if(sum > big){
			big = sum;
			position = x;
		}sum = 0;
	}
	printf("\n\n\nO aluno com maior media foi : [%s]",vet[position].name);
}
int findten(classe vet[], int size){
	int x, y, cont = 0;
	for(x = 0; x < size; x++){
		for( y = 0 ;  y < 3; y++){
			if(vet[x].exam[y] == 10){
				cont++;
				y+2;
			}
		}
	}
	printf("\n\nAlunos que tiraram nota 10 em alguma nota : [%d]",cont);
}
int approved(classe vet[], int size){
	int x, y;
	float sum  = 0;
	for(x = 0; x < size; x++){
		for( y = 0 ;  y < 3; y++){
			sum = sum + vet[x].exam[y];
		}
		sum = sum/3;
		if(sum >= 8){
			printf("\n[%s]",vet[x].name);
		}
		sum = 0;
	}	
}
int main(){
	int size;
	printf("\n\nDigite a quantidade de alunos : ");
	scanf("%d",&size);
	classe a[size];
	read(a,size);
	show(a,size);
	findbig(a,size);
	findten(a,size);
	printf("\n\nAprovados : ><");
	approved(a,size);
}
