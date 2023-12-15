#include <stdio.h>
#include <stdlib.h>

#define TAM 6

int quantidadePar(int numero[]) {
    int i, pares = 0;
    for (i = 0; i < TAM; i++) {
        if (numero[i] % 2 == 0) {
            pares++;        
        }    
    }
    return pares;
}

int quantidadeImpar(int numero[]) {
    int i, impares = 0;
    for (i = 0; i < TAM; i++) {
        if (numero[i] % 2 != 0) {
            impares++;        
        }
    }
    return impares;
}

int main() {
    int numero[TAM], i;
   
    for (i = 0; i < TAM; i++) {
        printf("Digite um numero: ");
        scanf("%d",&numero[i]);
    }
   
    printf("\nQuantidade de pares: %d \n", quantidadePar(numero));
    printf("Quantidade de impares: %d \n", quantidadeImpar(numero));
   
    return 0;
}