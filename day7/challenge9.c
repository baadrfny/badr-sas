#include <stdio.h>
typedef struct{
    char nom[50];
    float solde;
    float montant;
}Compte;


void ajouter(Compte *c, float montant){
    c->solde += montant;
}

int main (){
    Compte c ={"Badr",1100};
    printf("veuillez entrer le montant :");
    scanf("%f",&c.montant);
    ajouter(&c,c.montant);
    printf("%s %.2f ",c.nom,c.solde);
}
