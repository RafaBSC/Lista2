#include <stdio.h>

int main() {
    int salariofixo, vendas, comissao,salariototal;

    printf("Digite o salario fixo: ");
    scanf("%d", &salariofixo);

    printf("Digite o valor das vendas: ");
    scanf("%d", &vendas);

    if (vendas <= 1500) {
        comissao = vendas * 3 / 100;
    } else {
        comissao = (1500 * 3 / 100) + ((vendas - 1500) * 5 / 100);
    }

    salariototal = salariofixo + comissao;

    printf("O salario total e: %d reais\n", salariototal);

    return 0;
}
