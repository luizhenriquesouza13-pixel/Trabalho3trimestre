#include <stdio.h>

int main() {
    int n, i;

    scanf("%d", &n);

    int ehPrimo = 1;   // assume que é primo

    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            ehPrimo = 0;
            break;      // achou o menor divisor
        }
    }

    if (ehPrimo)
        printf("Primo\n");
    else
        printf("Menor divisor: %d\n", i);

    return 0;
}
