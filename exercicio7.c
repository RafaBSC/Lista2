#include <stdio.h>

int main() {
   
   float valor1, valor2;
   
   printf("Digite o valor 1: ");
   scanf("%f", &valor1);
   
   printf("Digite o valor 2: ");
   scanf("%f", &valor2);
   
   if (valor1 < valor2) {
   	printf("Os valores crescentes sao: %.1f %.1f", valor1, valor2);
   } else {
   	printf("Os valores crescentes sao: %.1f %.1f", valor2, valor1);
   }
   
   return 0;
}
