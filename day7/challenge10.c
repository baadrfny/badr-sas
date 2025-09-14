#include <stdio.h>
#include <stdlib.h>

typedef struct {

    char nom[50];
    float salaire;

}Employe;

int main (){

    int n = 2;
    Employe *tab = malloc(n * sizeof(Employe));
    strcpy(tab[0].nom,"Badr");
    tab[0].salaire = 3000;
    strcpy(tab[1].nom,"Ali");
    tab[1].salaire = 8000;

    for(int i=0;i<n;i++)
        printf("Nom %s %.2f \n",tab[i].nom,tab[i].salaire);

    return 0;


}
