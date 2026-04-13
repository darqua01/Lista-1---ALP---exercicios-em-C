#include <stdio.h>

int main(void) {
    float valor;
    
    printf("Insira o valor do produto: ");
    scanf("%f", &valor);

    if(valor > 100) {
        float novoValor = valor * 0.9;
        printf("O valor a se pagar é: %.2f", novoValor);
    }
    else {
        printf("O desconto não se aplica, o valor a se pagar é: %.2f", valor);
    }

    return 0;
}