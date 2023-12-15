#include <stdio.h>
#include <locale.h>

#define max 6

Qpares(int num[])
{
    int i;
    int pares = 0;
    for (i = 0; i < max; i++)
    {
        if (num[i] % 2 == 0)
        {
            pares++;
        }
    }
    return pares;
}

Qimpares(int num[])
{
    int i;
    int impares = 0;
    for (i = 0; i < max; i++)
    {
        if (num[i] % 2 == 0)
        {
            impares++;
        }
    }

    return impares;
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int i;
    int num[max];

    for (i = 0; i < max; i++)
    {
        printf("Digite o %dº número: %d\n", i + 1);
        scanf("%d", &num);
    }

    printf("Quantidade de números pares: %d\n", Qpares(num));
    printf("Quantidade de números impares: %d\n", Qimpares(num));

    return 0;
}


