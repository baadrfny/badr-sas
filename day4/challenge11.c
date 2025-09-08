
#include <stdio.h>

int main() {
    int n, sum = 0, count = 0;
    printf("Entrez des nombres (0 pour terminer):\n");
    while (1) {
        scanf("%d", &n);
        if (n == 0) break;
        sum += n;
        count++;
    }
    if (count > 0)
        printf("Moyenne = %.2f\n", (float)sum / count);
    else
        printf("Aucun nombre saisi.\n");
    return 0;
}
