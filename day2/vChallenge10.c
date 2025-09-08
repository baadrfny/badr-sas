
#include <stdio.h>

int main()
{
    int jour, mois, annee;
    char *Nmois[] = 
    {
        "NonValide", "Janvier", "Fevrier", "Mars", "Avril", "Mai", "Juin", "Juillet", "Aout", "Septembre", "Octobre", "Novembre", "Decembre" 
    };

    printf("Entrez la date au format jj/mm/aaaa : \n");

    printf("Entrez le jour : ");
    scanf("%d", &jour);
    printf("Entrez le mois : ");
    scanf("%d", &mois);
    printf("Entrez l'annee : ");
    scanf("%d", &annee);

    if (mois < 1 || mois > 12)
    {
        printf("Le mois n'est pas valide");

        return 1;
    }

    if (jour < 1 || jour > 31)
    {
        printf("Le jour n'est pas valide");

        return 1;
    }
    
    printf("%d-%s-%d", jour, Nmois[mois], annee);

    return 0;
}
