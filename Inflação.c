#include <stdio.h>

HUD()
{
    printf("==========================\n");
    printf("\tCalculadora");
    printf("\n==========================\n");
}
float PrecoInflacionado(float preco)
{
    float inflacao;

    if (preco < 100)
    {
        inflacao = 0.10;
    }
    else
    {
        inflacao = 0.20;
    }

    return preco * (1 + inflacao);
}
int main()
{
    float preco, novoPreco;

    printf("Digite o preco do produto: R$ ");
    scanf("%f", &preco);

    novoPreco = PrecoInflacionado(preco);

    printf("O novo preco do produto, com inflacao, e: R$ %.2f\n", novoPreco);

    return 0;
}