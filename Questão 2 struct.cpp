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
       
           printf("Digite seu endereço: ");
           gets(dados.endereco);
           
           printf("Digite a sua idade: ");
           scanf("%d", dados.Idade);
           fflush(stdin);
           system("cls");
           
           //Mostrando na Tela...
           printf("Seu nome é: %s\n ", dados.Nome);
           printf("Sua idade é: %d\n ", dados.Idade);
           printf("Seu endereço é: %s\n ", dados.endereco);
       
           return 0;
           }
