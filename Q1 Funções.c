#include <stdio.h>
#include <locale.h>
#include <string.h>

float notas(float num1, float num2){
      float Vmedia;
      Vmedia;
      Vmedia = (num1 + num2) / 2;
    printf("A média dos números %.1f e %.1f é: %.1f\n", num1, num2, Vmedia);
      return Vmedia;
      }
      
      int main(){
          setlocale(LC_ALL, "portuguese");
          float num1, num2;

        printf("Digite a primeira nota:");
          scanf("%f", &num1);
          
          printf("Digite a segunda nota:");
          scanf("%f", &num2);
          
          
          notas(num1, num2);
          
         
          
          
          
          
          return 0;
      }