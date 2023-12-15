#include <stdio.h>
#include <locale.h>

#define max 6
void HUD()
{
    printf("==========================\n");
    printf("\tCalculadora");
    printf("\n==========================\n");
}

void faxina()
{
    system("cls");
}
somar(int num1, int num2)
{
    int resultado;
    resultado = num1 + num2;
    return resultado;
}
subtrair(int num1, int num2)
{
    int resultado;
    resultado = num1 - num2;
    return resultado;
}
multiplicar(int num1, int num2)
{
    int resultado;
    resultado = num1 * num2;
    return resultado;
}
dividir(int num1, int num2)
{
    float resultado;
    resultado = num1 / (float)num2;
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
    char resposta;

do{
    HUD();
    printf("Digite o 1º Número: ");
    scanf("%d", &num1);

    
    printf("Digite o 2° Número: ");
    scanf("%d", &num2);

    faxina();

    soma = somar(num1, num2);
    subtracao = subtrair(num1, num2);
    multiplicacao = multiplicar(num1, num2);
    divisao = dividir(num1, num2);

    HUD();
    
    printf("1° Número: %d\n ", num1);
    printf("2º Número: %d\n", num2);
    printf("O resultado da soma: %d\n", soma);
    printf("O resultado da subtração: %d\n", subtracao);
    printf("O resultado da multuplicação: %d\n", multiplicacao);
    printf("O resultado da divisão: %.2f\n", divisao);

    
     printf("\nDeseja realizar outra operacao? (S para sim, qualquer outra tecla para encerrar): ");
        scanf(" %c", &resposta);

 } while (resposta == 'S' || resposta == 's');
   
    return 0;
}