
#include <stdio.h>

int main() {
    int base, exp, result = 1;
    printf("Entrez la base et l'exposant: ");
    scanf("%d %d", &base, &exp);

    int i = 0;
    while (i < exp) {
        result *= base;
        i++;
    }
    printf("Résultat = %d\n", result);
    return 0;
}
