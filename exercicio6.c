#include <stdio.h>

int main () {
	float valor1, valor2;
	
	printf ("Escreva o valor 1: ");
	scanf("%f", &valor1);
	
	printf ("Escreva o valor 2: ");
	scanf("%f", &valor2);
	
	if (valor1 > valor2) {
		printf ("O maior valor e: %f", valor1);
	} else {
		printf ("O maior valor e: %f", valor2);
	}
	
	return 0;
}

