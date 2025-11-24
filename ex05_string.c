#include <stdio.h>
#include <ctype.h>

int main() {
    char s[100];
    int i, cont = 0;

    fgets(s, 100, stdin);

    for (i = 0; s[i] != '\0'; i++) {
        char c = tolower(s[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            cont++;
    }

    printf("Vogais: %d\n", cont);

    return 0;
}
