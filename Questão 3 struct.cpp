#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

struct book{
       char nome[200];
       char autor[200];
       char categoria[200];
       float preco;
       };

int main(){
    setlocale(LC_ALL, "Portuguese");
    struct book dados[3];
  int i;
    for(  i = 0; i < 3; i++){
 printf("Digite o nome do %dº livro: ", i + 1);
 gets(dados[i].nome);
 
 printf("Digite o nome do autor do livro: ");
 gets(dados[i].autor);
 
 printf("Digite a categoria do livro: ");
 gets(dados[i].categoria);
 
 printf("Digite o preço do livro: ");
 scanf("%f", &dados[i].preco);
 
 printf("\n");   
fflush(stdin);
}
  
  for(  i = 0; i < 3; i++){
        printf("O nome do %dº livro é: %s\n", dados[i].nome, i + 1);
        printf("O nome do auto do %dº livro é: %s\n", dados[i].autor, i + 1);
        printf("A categoria do %dº Livro é: %s\n", dados[i].categoria, i + 1);
        printf("O preço do %dº Livro é: %.2f\n", dados[i].preco, i + 1);
        
        }  
 return 0;   
}
