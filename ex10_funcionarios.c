#include <stdio.h>

int main() {
    int N, i, op;
    int id[10];
    double sal[10];

    scanf("%d", &N);

    for (i = 0; i < N; i++)
        scanf("%d %lf", &id[i], &sal[i]);

    do {
        scanf("%d", &op);

        if (op == 1) { // listar todos
            for (i = 0; i < N; i++)
                printf("ID: %d Salario: %.2f\n", id[i], sal[i]);
        } 
        else if (op == 2) { // maior salário
            int idx = 0;
            for (i = 1; i < N; i++)
                if (sal[i] > sal[idx])
                    idx = i;
            printf("Maior salario: %.2f ID: %d\n", sal[idx], id[idx]);
        }
    } while(op != 0);

    return 0;
}
