#include <stdio.h>

int main() {
    float altura, peso_ideal;
    int sexo;  

    printf("Digite a altura da pessoa em metros: ");
    scanf("%f", &altura);

    printf("Digite o sexo da pessoa (1 para masculino ou 2 para feminino): ");
    scanf("%d", &sexo);


    switch (sexo) {
        case 1: 
            peso_ideal = (72.7 * altura) - 58;
            break;
        case 2: 
            peso_ideal = (62.1 * altura) - 44.7;
            break;
        default:
            printf("Sexo invalido. Utilize 1 para masculino ou 2 para feminino.\n");
            return 1; 
    }

    printf("O peso ideal e: %.2f kg\n", peso_ideal);

    return 0;
}
