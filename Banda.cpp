#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct info{
       char Nome[200];
       int Idade;
       float Peso;
       float Altura;
       };
       
       int main(){
       struct info dados;
       
       printf("Digite o seu nome: ");
       gets(dados.Nome);
       
       printf("Digite sua idade: ");
       scanf("%d", &dados.Idade);
       
       printf("Digite o seu peso: ");
       scanf("%f", &dados.Peso);
       
       printf("Digite sua altura: ");
       scanf("%f", &dados.Altura);
      
       printf("Seu nome �: %s\n",dados.Nome);
       printf("Sua idade �: %d\n",dados.Idade);
       printf("Seu Peso �: %.2f\n", dados.Peso);
       printf("Sua altura �: %.2f\n",dados.Altura);
           
       return 0;
       }
