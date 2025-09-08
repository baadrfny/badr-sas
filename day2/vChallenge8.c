#include <stdio.h>

int main()
{
    int mention;

    printf("Entrez votre mention : ");
    scanf("%d", &mention);

    if (mention < 10 && mention >= 0)
    {
        printf("Recale");
    }
    else if (mention >= 10 && mention < 12)
    {
        printf("Passable");
    }
    else if (mention >= 12 && mention < 14)
    {
        printf("Assez bien");
    }
    else if (mention >= 14 && mention < 16)
    {
        printf("Bien");
    }
    else if (mention >= 16 && mention <= 20)
    {
        printf("Tres bien");
    }
    else
    {
        printf("la mention doit etre comprise entre 0 et 20 !");
    }
    
    return 0;
}