#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define max 6

int Qpar(int num[])
{
    int i, pares = 0;
    for (i = 0; i < max; i++)
    {
        if (num[i] % 2 == 0)
        {
            pares++;
        }
    }
return pares;
}

int Qimpar(int num[])
{
    int i, impares = 0;
    for (i = 0; i < max; i++)
    {
        if (num[i] % 2 != 0)
        {
            impares++;
        }
    }
return impares;
}


int main()
{
    setlocale(LC_ALL, "portuguese");
    int num[max], i;

    for (i = 0; i < max; i++)
    {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &num[i]);
    }
    printf("\nQuantidade de pares: %d \n", Qpar(num));
    printf("Quantidade de impares: %d \n", Qimpar(num));

    return 0;
}
