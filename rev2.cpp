#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int i, num1, num2;
	int soma, media, produto;

	printf("Digite o 1º número: ");
	scanf("%d", &num1);
	
	printf("Digite o 2º número: ");
	scanf("%d", &num2);
	
	soma = num1 + num2;
	media = soma / 2;
	produto = num1 * num2;
	
	printf("A soma é: %d\n", soma);
	printf("A media é: %d\n", media);
	printf("O produto é: %d\n", produto);
	
return 0;
}
