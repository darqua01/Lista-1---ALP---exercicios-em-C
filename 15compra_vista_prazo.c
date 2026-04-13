#include <stdio.h>

int main(void) {
    float valor;
    char formaDePagamento;
    float valorFinal;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    printf("Digite a forma de pagamento (A para à vista e P para a prazo): ");
    scanf(" %c", &formaDePagamento);

    if(formaDePagamento == 'a' || formaDePagamento == 'A') {
        valorFinal = valor * 0.9;
    }
    else if(formaDePagamento == 'p' || formaDePagamento == 'P') {
        valorFinal = valor * 1.05;
    }
    else {
        printf("Erro");
        return 0;
    }
    printf("Valor final da compra: %.2f", valorFinal);

    return 0;
}