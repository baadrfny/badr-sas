#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct{
    char nom[50];
    int prix;
    int quantite;


} Produit;

int main (){

    Produit tab[3] = {{"Pizza",30,5},{"Tacos",37,20},{"Burger",80,40}};

    for(int i=0;i<3;i++)
        printf("nom %s | prix = %d | quantite = %d\n",tab[i].nom,tab[i].prix,tab[i].quantite);
    return 0;
}
