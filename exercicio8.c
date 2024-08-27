#include <stdio.h>

int main () {
	
	int comeco_partida, termino_partida, duracao;
	
	printf ("Que horas comecou a partida:");
	scanf ("%d", &comeco_partida);
	
	printf ("Que horas terminou a partida:");
	scanf ("%d", &termino_partida);
	
	if (termino_partida >= comeco_partida) {
		 duracao = termino_partida - comeco_partida;
    } else {
        duracao = (24 - comeco_partida) + termino_partida;
    }
    
        printf("A duracao do jogo e: %d horas\n", duracao);
}
