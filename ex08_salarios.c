#include <stdio.h>

int main() {
    int N, i, op;
    float sal[10], soma = 0;

    scanf("%d", &N);
    for (i = 0; i < N; i++)
        scanf("%f", &sal[i]);

    do {
        printf("1) Listar salarios\n2) Media\n0) Sair\n");
        scanf("%d", &op);

        switch (op) {
        case 1:
            for (i = 0; i < N; i++)
                printf("%.2f\n", sal[i]);
            break;
        case 2:
            soma = 0;
            for (i = 0; i < N; i++)
                soma += sal[i];
            printf("Media: %.2f\n", soma / N);
            break;
        }
    } while (op != 0);

    return 0;
}
