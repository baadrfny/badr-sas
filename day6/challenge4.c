#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50];
    char str2[50];

    printf("Veuillez entrer caractere 1 :");
    fgets(str1,50,stdin);

    printf("Veuillez entrer caractere 2 :");
    fgets(str2,50,stdin);

    if (strcmp (str1,str2 ) == 0 )
    {
        printf("Les daux chain sont identiques ");
    }
    else
        printf("Les daux chain sont no identiques");
    
    return 0;
}
