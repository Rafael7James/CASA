#include <stdio.h>
#include <stdlib.h>

struct Info{
       char Nome[200];
       int Idade;
       char endereco[200];
       };
       
       int main(){
           struct Info dados;
           
           printf("Digite seu nome: ");
           gets(dados.Nome);
       
           printf("Digite seu endere�o: ");
           gets(dados.endereco);
           
           printf("Digite a sua idade: ");
           scanf("%d", dados.Idade);
           fflush(stdin);
           system("cls");
           
           //Mostrando na Tela...
           printf("Seu nome �: %s\n ", dados.Nome);
           printf("Sua idade �: %d\n ", dados.Idade);
           printf("Seu endere�o �: %s\n ", dados.endereco);
       
           return 0;
           }
