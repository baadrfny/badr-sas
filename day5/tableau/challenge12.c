#include <stdio.h>

int main()
{
    int T[10], n, i;

    printf("Entrez le nombre d'elements du tableau  : ");
    scanf("%d", &n);

    if (n > 10)
    {
        printf("Le nombre d'elements doit etre inferieur ou egal a 10.\n");
        return 1;
    }

    printf("Entrez les elements du tableau : \n");
    for (i = 0; i < n; i++)
    {
        printf("Element %d : ", i+1);
        scanf("%d", &T[i]);
    }

    printf("Les elements pairs du tableau sont : \n");
    for ( i = 0; i < n; i++)
    {
        if (T[i] % 2 == 0)
        {
            printf("%d ", T[i]);
        }   
    }
    printf("\n");

    return 0;
}   