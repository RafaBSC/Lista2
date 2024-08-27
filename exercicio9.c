#include <stdio.h>

int main() {
	
    float horastrabalhadas, salariohora, salariototal, acrescimo_extra = 1.5;  
    int horas_semanal = 40, semanas_no_mes = 4, horas_no_mes = horas_semanal * semanas_no_mes;       
  
    printf("Digite o numero de horas trabalhadas no mes: ");
    scanf("%f", &horastrabalhadas);

    printf("Digite o salario por hora: ");
    scanf("%f", &salariohora);

   
    if (horastrabalhadas > horas_no_mes) {
        float horas_extras = horastrabalhadas - horas_no_mes;
        salariototal = (horas_no_mes * salariohora) + (horas_extras * salariohora * acrescimo_extra);
    } else {
        salariototal = horastrabalhadas * salariohora;
    }

    printf("O salario total do funcionario e: R$%.2f\n", salariototal);

    return 0;
}
