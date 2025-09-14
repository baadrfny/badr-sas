#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Etudiant {

    char nom[50];
    float note;
    struct Etudiant *suivant;


}Etudiant ;


Etudiant* ajouter(Etudiant* tete ,char n[],float note){

    Etudiant* e =malloc(sizeof(Etudiant));

    strcpy(e->nom, n);
    e->note = note;
    e->suivant = tete;
    return e;

}

void afficher (Etudiant* tete){

    while(tete){
        printf("Nom :%s Note :%.2f\n",tete->nom,tete->note);
        tete = tete->suivant;
    }

}

int main(){

    Etudiant* list = NULL;
    list = ajouter(list,"Badr",15);
    list = ajouter(list,"Ali",12);
    afficher(list);
    return 0;

}
