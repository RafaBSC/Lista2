#include <stdio.h>

int main() {

int numero;

printf("Digite o numero: ");
scanf("%d", &numero);

if (numero > 10){
	printf("E maior que 10");
} else {
	printf("Esse numero e menor que 10");
}

return 0;
}
