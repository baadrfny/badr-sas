
#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Entrez un nombre: ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++) {
        int res = n * i;
        printf("%d x %d = %d\n", n, i, res);
        sum += res;
    }
    printf("Somme totale = %d\n", sum);
    return 0;
}
