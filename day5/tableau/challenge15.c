#include <stdio.h>

int main() {
    int T1[10], T2[10], Tf[20];
    int n1, n2, i, y;

    printf("Entrez le nombre d'elements du premier tableau (mai 10) : ");
    scanf("%d", &n1);

    if (n1 > 10) 
    {
        printf("Le nombre d'elements doit etre inferieur ou egal a 10.\n");
        return 1;
    }

    printf("Entrez les elements du premier tableau : \n");
    
    for ( i = 0; i < n1; i++) 
    {
        printf("Element %d : ", i+1);
        scanf("%d", &T1[i]);
    }

    printf("Entrez le nombre d'elements du deuiieme tableau : ");
    scanf("%d", &n2);

    if (n2 > 10) 
    {
        printf("Le nombre d'elements doit etre inferieur ou egal a 10.\n");
        return 1;
    }

    printf("Entrez les elements du deuxieme tableau : \n");

    for ( i = 0; i < n2; i++) 
    {
        printf("Element %d : ", i+1);
        scanf("%d", &T2[i]);
    }

    for ( i = 0; i < n1; i++) 
    {
        Tf[i] = T1[i];
    }

    for ( y = 0; y < n2; y++) 
    {
        Tf[i + y] = T2[y];
    }

    printf("Tableau fusionne : \n");

    for (i = 0; i < (n1 + n2); i++) 
    {
        printf("%d ", Tf[i]);
    }
    printf("\n");

    return 0;
}