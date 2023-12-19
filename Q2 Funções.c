#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void HUD()
{
    printf("==========Tabuada==========\n\n");
}

void Tabuada(int num)
{
    int i;
    printf("Tabuada do: %d\n", num);
    for (i = 1; i < 11; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int num;
    
    HUD();
    
    printf("Digite um número: ");
    scanf("%d", &num);

    Tabuada(num);

    return 0;
}