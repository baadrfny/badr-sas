#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Personne {
    char nom[50],prenom[50];
    int age;
};

int main()
{
    struct Personne pr1;

    printf("entrer le nom :");
    fgets(pr1.nom,50,stdin);
    pr1.nom[strcspn(pr1.nom,"\n")] = '\0';

    printf("entrer leprenom :");
    fgets(pr1.prenom,50,stdin);
    pr1.prenom[strcspn(pr1.prenom,"\n")]= '\0';

    printf("entrer l'age:");
    scanf("%d",&pr1.age);





    printf("\n ----- votre information ----- \n");
    printf("Nom : %s \n Prenoom : %s \n Age : %d \n",pr1.nom,pr1.prenom,pr1.age);





    return 0;
}
