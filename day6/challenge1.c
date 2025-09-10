#include <stdio.h>
#include <string.h>

int main()
{
    
    char caracter[50];

       printf("entrer un caractere ou une chaine :");
       fgets(caracter, sizeof(caracter), stdin);
    
       printf("Vous avez saisi : %s ",caracter);

    return 0;
}
