#include <stdio.h>

int main() {
    float sal, inss, horas, valorHora, totalHE;
    int op;

    scanf("%f", &sal);

    do {
        printf("1) INSS\n2) Hora Extra\n0) Sair\n");
        scanf("%d", &op);

        switch (op) {
        case 1:
            inss = sal * 0.08;
            printf("INSS: %.2f\n", inss);
            break;

        case 2:
            scanf("%f", &horas);
            valorHora = sal / 220.0;
            totalHE = horas * valorHora * 1.5;
            printf("Hora Extra: %.2f\n", totalHE);
            break;
        }
    } while (op != 0);

    return 0;
}
