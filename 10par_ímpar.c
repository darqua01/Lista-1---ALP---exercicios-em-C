#include <stdio.h>

int main(void) {
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if(num % 2 == 0) {
        printf("Par");
    }

    else {
        printf("Ímpar");
    }

    return 0;
}
