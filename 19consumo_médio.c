#include <stdio.h>

float consumoFormula(float a, float b) {
    return a / b;
}

int main(void) {
    float distancia;
    float combustivel;

    printf("Qual foi a distância percorrida pelo carro em quilômetros? ");
    scanf("%f", &distancia);

    printf("Qual foi o consumo em Litros durante o percurso? ");
    scanf("%f", &combustivel);

    float consumo = consumoFormula(distancia, combustivel);

    printf("O consumo médio foi de %.1fKm/L", consumo);
}