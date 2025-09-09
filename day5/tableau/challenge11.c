
#include <stdio.h>

int main()
{
    int T[10], n, vr, vn, i;

    printf("Entrez le nombre d'elements du tableau  : ");
    scanf("%d", &n);

    if (n > 10)
    {
        printf("Le nombre d'elements doit etre inferieur ou egal a 10\n");
        return 1;
    }

    printf("Entrez les elements du tableau : \n");
    for (i = 0; i < n; i++)
    {
        printf("Element %d : ", i+1);
        scanf("%d", &T[i]);
    }

    printf("Entrez la valeur a remplacer : ");
    scanf("%d", &vr);
    
    printf("Entrez la nouvelle valeur : ");
    scanf("%d", &vn);

    for (i = 0; i < n; i++)
    {
        if (T[i] == vr)
        {
            T[i] = vn;
        }
    }

    printf("Tableau modifie : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", T[i]);
    }
    printf("\n");

    return 0;
}
