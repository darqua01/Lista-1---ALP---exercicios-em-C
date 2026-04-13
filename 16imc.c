#include <stdio.h>

int formulaIMC(float a, float b) {
    return a / (b * b);
}

int main(void) {
    float peso;
    float altura;

    printf("Digite seu peso em kg: ");
    scanf("%f", &peso);

    printf("Digite a sua altura em metros: ");
    scanf("%f", &altura);

    float IMC = formulaIMC(peso, altura);

    printf("Seu IMC é: %.2f", IMC);

    return 0;
}