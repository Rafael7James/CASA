#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int i, num1, num2;
	int soma, media, produto;

	printf("Digite o 1� n�mero: ");
	scanf("%d", &num1);
	
	printf("Digite o 2� n�mero: ");
	scanf("%d", &num2);
	
	soma = num1 + num2;
	media = soma / 2;
	produto = num1 * num2;
	
	printf("A soma �: %d\n", soma);
	printf("A media �: %d\n", media);
	printf("O produto �: %d\n", produto);
	
return 0;
}
