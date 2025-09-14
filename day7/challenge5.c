#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct {
    char titre[50],auteur[50];
    int annee;


}Livre;

Livre addLivre(char tit[],char aut[],int ann[]){
        Livre liv;

        strcpy(liv.titre,tit);
        sprintf(liv.auteur,aut);
        liv.annee = ann;
        return liv;


}

int main(){

    Livre Liv = addLivre("Starry night","Van gogh",1887);
    printf("Titre :%s\n",Liv.titre);
    printf("Auteur :%s\n",Liv.auteur);
    printf("Annee :%d",Liv.annee);

    return 0;


}
