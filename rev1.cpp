#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "portuguese");
	int num;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	
	if(num > 10){
		printf("É maior que 10!");
	}else if(num == 10){
		printf("É igual a 10!");
	}
	else{
		printf("É menor que 10!");
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
return 0;
}
