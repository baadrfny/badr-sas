#include <stdio.h>

int main()
{
    int x, base, expo;
    int result = 1.0;

    printf("Entrez la valeur de la base : ");
    scanf("%d", &base);

    printf("Entrez la valeur de l'exposant : ");
    scanf("%d", &expo);

    if (expo == 0)
    {
        printf("= 1");
    }

    while (expo > 0)
    {
        result = result * base;
        expo --;
    }
    printf("= %d ",result);
    

    return 0;
}