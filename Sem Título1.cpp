#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct book{
	char nome[200];
	char autor[200];
	char categoria[200];
    float valor;
};

float desc(struct book dados){
	float desconto;
	float preco;
	desconto = dados.valor * 0.1;
	preco = dados.valor - desconto;
	return preco;
}

int main(){
	struct  book dados;
	printf("Digite  o nome do livro: ");
	gets(dados.nome);
	
	printf("Digite o nome do autor: ");
	gets(dados.autor);
	
	printf("Digite a categoria do livro: ");
	gets(dados.	categoria);
	
	printf("Digite o valor do livro: ");
	scanf("%f", &dados.valor);
		
		printf("Valor desconto: %.1f", desc(dados));
		
return 0;
}
