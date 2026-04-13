#include <stdio.h>

float desconto(float a) {
    return a * 0.85;
}

int main(void) {
    char nome[20];
    float valor;
    int quantidade;

    printf("Qual é o nome do produto? ");
    scanf("%s", nome);

    printf("Qual é o valor do produto? ");
    scanf("%f", &valor);

    printf("Qual é a quantidade a ser comprada? ");
    scanf("%d", &quantidade);

    float valorTotal = valor * quantidade;
    float valorFinal;

    printf("Nome do produto: %s\n", nome);
    printf("Quantidade: %d\n", quantidade);
    printf("Valor total: %.2f\n", valorTotal);

    if(valorTotal > 500) {
        valorFinal = desconto(valorTotal);
        printf("Valor final = %.2f\n", valorFinal);
    }
    else {
        valorFinal = valorTotal;
        printf("Desconto não se aplica, valor final: %.2f\n", valorTotal);
    }
    
    return 0;
}