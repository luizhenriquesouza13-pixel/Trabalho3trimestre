#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n > 0)
        printf("positivo\n");
    else if (n < 0)
        printf("negativo\n");
    else
        printf("zero\n");

    if (n % 2 == 0)
        printf("par\n");
    else
        printf("impar\n");

    return 0;
}
