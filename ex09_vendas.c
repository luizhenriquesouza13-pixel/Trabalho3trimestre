#include <stdio.h>

int main() {
    float v[2][2];
    int op;

    scanf("%f %f %f %f", &v[0][0], &v[0][1], &v[1][0], &v[1][1]);

    do {
        scanf("%d", &op);

        if (op == 1) {
            printf("Filial 1: %.2f\n", v[0][0] + v[0][1]);
            printf("Filial 2: %.2f\n", v[1][0] + v[1][1]);
        } 
        else if (op == 2) {
            printf("Mes 1: %.2f\n", v[0][0] + v[1][0]);
            printf("Mes 2: %.2f\n", v[0][1] + v[1][1]);
        } 
        else if (op == 3) {
            printf("Total geral: %.2f\n", v[0][0]+v[0][1]+v[1][0]+v[1][1]);
        }
    } while(op != 0);

    return 0;
}
