#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

int main()
{
    float revenu;
    int score_credit, duree_pret;

    printf("Entrer revenu :");
    scanf("%f",&revenu);
    printf("Entrer score de credit :");
    scanf("%d",&score_credit);
    printf("Entrer la duree de pret :");
    scanf("%d",&duree_pret);

    if (revenu >= 30000 && score_credit >= 700 && duree_pret <= 10)
    {
        printf("Eligible");
        }
    else if (revenu >= 30000 && score_credit >= 650 && duree_pret <= 15 ){
        printf("Eligible avec conditions");
    }
    else if (revenu < 30000 && score_credit >= 650 && duree_pret > 15){
        printf("Non eligible");
    }
    return 0;
}
