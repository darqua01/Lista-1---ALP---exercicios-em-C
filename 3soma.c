#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int main(void) {
    int num1;
    int num2;

    printf("Digite um número: ");
    scanf("%d", &num1);

    printf("Digite mais um número: ");
    scanf("%d", &num2);

    int resultado = soma(num1, num2);

    printf("A soma desses números equivale a: %d", resultado);

    return 0;
}