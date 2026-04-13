#include <stdio.h>

int main(void) {

    char nome[20];

    printf("Qual é o seu nome? ");
    scanf("%s", nome);

    printf("Olá, %s! Seja bem-vindo(a).", nome);

    return 0;
}
