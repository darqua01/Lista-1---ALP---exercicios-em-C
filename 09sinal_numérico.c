#include <stdio.h>

int main(void) {
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if(num > 0){
        printf("%d é positivo", num);
    }
    else if(num < 0){
        printf("%d é negativo", num);
    }
    else {
        printf("zero");
    }

    return 0;
}
