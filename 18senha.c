#include <stdio.h>

int main(void) {
    int senhaCorreta = 1234;
    int senhaInserida;

    printf("Digite a sua senha numérica de 4 dígitos: ");
    scanf("%d", &senhaInserida);

    if(senhaInserida == senhaCorreta) {
        printf("Acesso permitido");
    }
    else {
        printf("Senha incorreta");
    }

    return 0;
}