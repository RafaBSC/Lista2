#include <stdio.h>

int main() {
    float numeroconta, saldo, debito, credito, saldoatual;

    printf("Digite o numero da conta: ");
    scanf("%f", &numeroconta);

    printf("Digite o saldo: ");
    scanf("%f", &saldo);

    printf("Digite o debito: ");
    scanf("%f", &debito);

    printf("Digite o credito: ");
    scanf("%f", &credito);

    saldoatual = saldo - debito + credito;

    printf("Saldo atual: %.2f\n", saldoatual);

    if (saldoatual >= 0) {
        printf("Saldo Positivo\n");
    } else {
        printf("Saldo Negativo\n");
    }

    return 0;
}
