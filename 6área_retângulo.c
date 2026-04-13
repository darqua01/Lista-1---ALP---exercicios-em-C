#include <stdio.h>

int area(float a, float b) {
    return a * b;
}

int main(void) {
    float base;
    float altura;
    
    printf("Digite o valor da base em metros: ");
    scanf("%f", &base);

    printf("Digite o valor da altura em metros: ");
    scanf("%f", &altura);

    float resultado = area(base, altura);

    printf("A área do retângulo equivale a: %.1f", resultado);

    return 0;
}