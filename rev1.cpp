#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "portuguese");
	int num;
	
	printf("Digite um n�mero: ");
	scanf("%d", &num);
	
	if(num > 10){
		printf("� maior que 10!");
	}else if(num == 10){
		printf("� igual a 10!");
	}
	else{
		printf("� menor que 10!");
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
return 0;
}
