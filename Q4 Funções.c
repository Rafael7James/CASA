#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void HUD()
{
    printf("==========Par ou Impar==========\n\n");
}

void Qpar(num)
{
    int i, pares;
    if (num % 2 == 0)
    {
        printf("Par");
    }
    else
    {
        printf("Impar");
    }
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int num;
    HUD();
    printf("Digite um número: ");
    scanf("%d", &num);

    Qpar(num);

    return 0;
}