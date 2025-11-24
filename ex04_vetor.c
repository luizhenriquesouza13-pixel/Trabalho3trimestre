#include <stdio.h>

int main() {
    int v[10], i, maior, menor, soma = 0;

    for (i = 0; i < 10; i++)
        scanf("%d", &v[i]);

    maior = menor = v[0];

    for (i = 0; i < 10; i++) {
        soma += v[i];
        if (v[i] > maior) maior = v[i];
        if (v[i] < menor) menor = v[i];
    }

    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    printf("Media: %.2f\n", soma / 10.0);

    return 0;
}
