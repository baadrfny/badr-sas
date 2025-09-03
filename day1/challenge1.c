#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nom[50];
    char prenom[50];
    int age;
    char email[100];
    char sexe[50];

    printf("Veuillez etrer votre nom :");
    scanf("%s",nom);
    printf("Veuillez etrer votre nom :");
    scanf("%s",&prenom);
    printf("Veuillez entrer votre email :");
    scanf("%s",&email);
    printf("veuillez entrer votre age :");
    scanf("%d",&age);
    printf("veuillez entrer votre sexe :");
    scanf("%s",&sexe);


    printf("----Votre information---- ");
    printf("votre Nom est : %s\n",nom);
    printf("votre Prenom est : %s\n",prenom);
    printf("votre email est : %s\n",email);
    printf("votre sexe est : %s\n",sexe);
    printf("Votre age est : %d\n",age);
    return 0;
    //test
}
