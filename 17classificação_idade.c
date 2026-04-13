#include <stdio.h>

int main(void) {
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if(idade >= 0 && idade <= 12) {
        printf("Criança");
    }
    else if(idade >= 13 && idade <= 17) {
        printf("Adolescente");
    }
    else if(idade >= 18){
        printf("Adulto");
    }
    else {
        printf("Então você não nasceu ;)");
    }

    return 0;
}