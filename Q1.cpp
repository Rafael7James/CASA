#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define max 6

int main(){
setlocale(LC_ALL, "portuguese");
int	num[max], i, pares, impares;

for(i = 0; i < max; i++){
	printf("Digite o %d n�mero: ", i + 1);
	scanf("%d", &num[i]);

	
	if(num[i] %2 == 0){
		pares++;
			
	}else
	impares++;
}	

printf("N�meros pares: %d\n", pares);
printf("N�meros impares: %d\n", impares);
	
return 0;
}
