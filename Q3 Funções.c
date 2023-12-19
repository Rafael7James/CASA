#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void HUD()
{
    printf("==========Tabuada==========\n\n");
}

int somar(int num1, int num2)
{
    int soma;
    soma;
    soma = num1 + num2;
    printf("\n%d + %d = %d\n", num1, num2, num1 + num2);
    return soma;
}

int subtrair(int num1, int num2)
{
    int subtracao;
    subtracao;
    subtracao = num1 - num2;
     printf("%d - %d = %d\n", num1, num2, num1 - num2);
    return subtracao;
}

int multiplicar(int num1, int num2)
{
    int multiplicacao;
    multiplicacao;
    multiplicacao = num1 * num2;
     printf("%d x %d = %d\n", num1, num2, num1 * num2);
    return multiplicacao;
}

float dividir(float num1, float num2)
{
    float divisao;
    divisao;
    divisao = num1 / (float)num2;
     printf("%.1f : %.1f = %.1f\n", num1, num2, num1 / num2);
    return divisao;
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int num1;
    int num2;
    int soma;
    int subtracao;
    int multiplicacao;
    float divisao;

    HUD();
    printf("Digite o 1° número: ");
    scanf("%d", &num1);
    printf("Digite o 2° número: ");
    scanf("%d", &num2);

    soma = somar(num1, num2);
    subtracao = subtrair(num1, num2);
    multiplicacao = multiplicar(num1, num2);
    divisao = dividir(num1, num2);



    return 0;
}