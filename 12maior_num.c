#include <stdio.h>

int main(void) {
    int num1;
    int num2;

    printf("Digite um número: ");
    scanf("%d", &num1);

    printf("Digite mais um número: ");
    scanf("%d", &num2);

    if(num1 > num2) {
        printf("Maior número: %d", num1);
    }
    else if(num1 < num2) {
        printf("Maior número: %d", num2);
    }
    else {
        printf("Eles são iguais");
    }

    return 0;
}