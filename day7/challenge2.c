#include <stdio.h>
#include <stdlib.h>
#include <string.h>



struct Etudiant{
    char nom[50],prenom[50];
    int notes[3];

};


int main (){
    struct Etudiant etu1;

    printf("Veuillez entrer le nom :");
    fgets(etu1.nom,50,stdin);
    etu1.nom[strcspn(etu1.nom,"\n")]='\0';

    printf("Veuillez entrre le prenoom :");
    fgets(etu1.prenom,50,stdin);
    etu1.prenom[strcspn(etu1.prenom,"\n")]='\0';

    for(int j = 0;j<3;j++){
        printf("veuillez entrer la note %d :",j+1);
        scanf("%d", &etu1.notes[j]);

    }




    printf("\n votre information \n");
    printf("Nom : %s \n Prenom : %s \n",etu1.nom,etu1.prenom);
    for(int i = 0;i<3 ; i++){
        printf(" Notes : %d,",etu1.notes[i]);

    }





}
