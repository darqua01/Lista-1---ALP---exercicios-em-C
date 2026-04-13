#include <stdio.h>

int media(int a, int b) {
    return (a + b) / 2;
}

int main(void) {
    int nota1;
    int nota2;

    printf("Nota da primeira prova: ");
    scanf("%d", &nota1);

    printf("Nota da segunda prova: ");
    scanf("%d", &nota2);

    int resultado = media(nota1, nota2);

    printf("Sua média é: %d", resultado);

    return 0;
}
