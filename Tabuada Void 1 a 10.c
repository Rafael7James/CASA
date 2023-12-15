#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 HUD()
{
    printf("==========================\n");
    printf("\tCalculadora");
    printf("\n==========================\n");
}

 tabuada(int num)
{
    printf("Tabuada do %d:\n", num);
    for (int i = 1; i <= 10; i++)
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

    tabuada(num); 

    return 0;
}
