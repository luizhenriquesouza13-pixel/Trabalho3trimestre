#include <stdio.h>

int main() {
    int n, qtd = 0, soma = 0;

    scanf("%d", &n);

    while (n != -1) {
        soma += n;
        qtd++;
        scanf("%d", &n);
    }

    printf("Quantidade: %d\n", qtd);
    printf("Soma: %d\n", soma);

    if (qtd > 0)
        printf("Media: %.2f\n", (float)soma / qtd);
    else
        printf("Media: 0\n");

    return 0;
}
