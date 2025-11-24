#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Verifica se é positivo, negativo ou zero
    if (numero > 0) {
        printf("O numero eh positivo.\n");
    } else if (numero < 0) {
        printf("O numero eh negativo.\n");
    } else {
        printf("O numero eh zero.\n");
    }

    // Verifica se é par ou ímpar
    if (numero % 2 == 0) {
        printf("O numero eh par.\n");
    } else {
        printf("O numero eh impar.\n");
    }

    return 0;
}
