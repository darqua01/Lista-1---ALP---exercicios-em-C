#include <stdio.h>

int conversao(float a) {
    return a * 100;
}

int main(void) {
    float metros;

    printf("Digite um número em metros a ser convertido: ");
    scanf("%f", &metros);

    int resultado = conversao(metros);

    printf("%.1fm = %dcm", metros, resultado);
    return 0;
}