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
        strcpy(resultado, "Consulte um nutricionista para orienta��o.");
    else if (imc < 25)
        strcpy(resultado, "Mantenha h�bitos saud�veis.");
    else if (imc < 30)
        strcpy(resultado, "Considere uma dieta balanceada e atividade f�sica.");
    else if (imc < 35)
        strcpy(resultado, "Procure orienta��o de um profissional de sa�de.");
    else if (imc < 35)
        strcpy(resultado, "Consulte um m�dico para orienta��o.");
    else
        strcpy(resultado, "Busque assist�ncia m�dica imediatamente.");

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
    printf("\nRecomenda��o: %s \n", rec(imc));
    return 0;
}