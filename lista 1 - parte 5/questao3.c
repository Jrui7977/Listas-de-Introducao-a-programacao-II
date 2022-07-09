#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
	char author[16];
	char title[16];
	int year;
}book;
void read(book var[], int size){
	printf("\nDigite o nome do autor do livro : ");
	scanf("%s",var[size].author);
	printf("\nDigite o nome do Livro : ");
	scanf("%s",var[size].title);
	printf("\nDigite a data de lancamento do livro : ");
	scanf("%d",&var[size].year);
}
void write(book var[], int size){
	int x;
	for(x = 0; x < size;x++){
		printf("\n\t[Cadastro %d]",x+1);
		printf("\n\t|Nome autor : %s|",var[x].author);
		printf("\n\t|Nome Livro : %s|",var[x].title);
		printf("\n\t|Ano: %d|\n",var[x].year);
	}
}
int findebooks(book var[], int size, char* index_title){
	int x,position = 0;
	for(x = 0; x < size;x++){
		if(strcmp(index_title,var[x].title)==0){
			return position = x;
		}
	}
	return -1;
}
int main(){
	int size = 100;
	int answer;
	book b[size];
	int aux;
	int y;
	char procura[16];
	while(answer !=4){
		printf("\n\n[1-Cadastrar]\t[2-Mostrar]\t[3-Consultar]\t[4-Sair] : ");
		scanf("%d",&answer);
		if(answer == 1){
			read(b,y);
			y++;
		}
		if(answer == 2){
			write(b,y);
		}
		if(answer == 3){
			printf("\nDigite o nome do livro a ser pesquisado : ");
			scanf("%s",procura);
			aux = findebooks(b,size,procura);
			if(aux == -1){
				printf("\nLivro nao encontrado : ");
			}else{
				printf("\n|O livro encontrado foi : %s |",b[aux].title);
				printf("\n|autor : %s |", b[aux].author);
				printf("\n|Ano de lancamento : %d |",b[aux].year);
			}
		}
	}
}
