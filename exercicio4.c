#include <stdio.h>

int main () {
	
	float nota1, nota2, media;
	
	printf("Digite a nota 1:");
	scanf("%f", &nota1);
	
	printf("Digite a nota 2:");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2) / 2;
	if (media >= 7) {
		printf("\nO aluno esta aprovado");
	} else {
		printf ("\nReprovado");
	}
	
	printf("\nA media do aluno e: %.2f", media);
	
	return 0;
}
