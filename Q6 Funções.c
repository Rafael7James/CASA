#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define max 3

struct aluno
{
char nome[200];
float notas[3];
float media;
};

void calc(struct aluno dados[]){
int i;
float somanotas;
for ( i = 0; i < max; i++)
{
somanotas += dados[i].notas;  
}
return somanotas / i;
}

int main(){
int i;
float notas[3];
float media;

for ( i = 0; i < max; i++)
{
printf("Digite a %d° nota", i + 1);
scanf("%f", &notas[i]);
}

dados.media = calc(dados);
printf("\nMédia: %.2f \n", dados.media);
   
    return 0;
}










