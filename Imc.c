#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

float IMC(float pes, float alt)
{
    return pes / (alt * alt);
}

void classificacao(float imc)
{
    if (imc < 18.5)
        printf("Abaixo do pes");
    else if (imc < 25)
        printf("Pes normal");
    else if (imc < 30)
        printf("Sobrepes");
    else if (imc < 35)
        printf("Obesidade grau 1");
    else if (imc < 35)
        printf("Obesidade grau 2");
    else
        printf("Obesidade grau 3");
}

char *rec(float imc)
{
    char resultado[200];

    if (imc < 18.5)
        strcpy(resultado, "Consulte um nutricionista para orientação.");
    else if (imc < 25)
        strcpy(resultado, "Mantenha hábitos saudáveis.");
    else if (imc < 30)
        strcpy(resultado, "Considere uma dieta balanceada e atividade física.");
    else if (imc < 35)
        strcpy(resultado, "Procure orientação de um profissional de saúde.");
    else if (imc < 35)
        strcpy(resultado, "Consulte um médico para orientação.");
    else
        strcpy(resultado, "Busque assistência médica imediatamente.");

    return resultado;
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    float peso;
    float altura;
    float imc;

    printf("Digite o seu Peso: KG");
    scanf("%f", &peso);

    printf("Digite a sua altura: M");
    ;
    scanf("%f", &altura);

    imc = calc(peso, altura);
    printf("\nImc: %.2f\n", imc);
    printf("\nRecomendação: %s \n", rec(imc));
    return 0;
}