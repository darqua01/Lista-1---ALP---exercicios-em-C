#include <stdio.h>

int main(void) {
    float salario;
    float bonus;

    printf("Digite o seu salário: ");
    scanf("%f", &salario);

    if(salario < 2000) {
        bonus = 200;
    }
    else {
        bonus = 100;
    }
    
    float salarioFinal = salario + bonus;
    printf("Salário final: %.2f", salarioFinal);

    return 0;
}