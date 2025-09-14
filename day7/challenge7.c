#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct {
    int jour;
    int mois;
    int annee;
}Date;

int main(){

    Date d;
    Date *p = &d;
    p->jour = 13;
    p->mois = 9;
    p->annee = 2025;

    printf("%d/%d/%d",p->jour,p->mois,p->annee);

    return 0;
}
