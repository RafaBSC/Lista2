#include <stdio.h>

int main() {
    float quantidadeatual, quantidademaxima, quantidademinima, quantidademedia ;

    printf("Digite a quantidade atual em estoque: ");
    scanf("%f", &quantidadeatual);

    printf("Digite a quantidade maxima em estoque: ");
    scanf("%f", &quantidademaxima);

    printf("Digite a quantidade minima em estoque: ");
    scanf("%f", &quantidademinima);

    quantidademedia = (quantidademaxima + quantidademinima) / 2;

    printf("Quantidade media: %.2f\n", quantidademedia);

    if (quantidadeatual >= quantidademedia) {
        printf("Nao efetuar compra\n");
    } else {
        printf("Efetuar compra\n");
    }

    return 0;
}


