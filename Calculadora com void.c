#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void Hud()
{
    printf("=======================\n");
    printf("\t Tabuada");
    printf("\n=======================\n");
}

void faxina()
{
    system("cls");
}

int somar(int num1, int num2)
{
    int resultado;
    resultado = num1 + num2;
    return resultado;
}

int subtrair(int num1, int num2)
{
    int resultado;
    resultado = num1 - num2;
    return resultado;
}

int multiplicar(int num1,int num2)
{
    int resultado;
    resultado = num1 * num2;
    return resultado;
}

float dividir(int num1,int num2){
    float resultado;
    resultado = num1 / (float) num2;
    return resultado;
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
    Hud();

    printf("Digite o 1� n�mero: ");
    scanf("%d", &num1);

    printf("Digite o 2� n�mero: ");
    scanf("%d", &num2);

    faxina();

    soma = somar(num1, num2);
    subtracao = subtrair(num1, num2);
    multiplicacao = multiplicar(num1, num2);
    divisao = dividir(num1, num2);

    Hud();
    printf("1� N�mero: %d\n", num1);
    printf("2� N�mero: %d\n", num2);
    printf("Resultado da soma: %d\n", soma);
    printf("Resultado da subtra��o: %d\n", subtracao);
    printf("Resultado da multiplica��o: %d\n", multiplicacao);
    printf("Resultado da divis�o: %.2f\n", divisao); 
 
    return 0;
}