#include <stdio.h>
#include <math.h>

int main() {
    int n, i, j,estPremier;

    printf("Entrez une valeur de n: ");
    scanf("%d", &n);

    printf("Nombres premiers de %d sont :", n);

    for(i = 2; i <= n; i++) {
    estPremier = 1;
        
        for(j = 2; j <= sqrt(i); j++) {
            if(i % j == 0) {
            estPremier = 0; 
                break;
            }
        }

        if (estPremier) {
            printf("%d ", i);
        }
    }

    return 0;
}
