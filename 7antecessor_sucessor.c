#include <stdio.h>

int antecessor(int a) {
    return a - 1;
}

int sucessor(int a) {
    return a + 1;
}

int main(void) {
    int num;
    
    printf("Digite um número: ");
    scanf("%d", &num);

    int ant = antecessor(num);
    int suc = sucessor(num);

    printf("Antecessor: %d", ant);
    printf("\nNúmero: %d", num);
    printf("\nSucessor: %d", suc);

    return 0;
}