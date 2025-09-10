#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char chain[100];
    char c[100];

    printf("Entrer un chaine :");
    fgets(chain,100,stdin);
    printf("entrer le mot cherchee ;");
    fgets(c,100,stdin);

    
    
       if (strstr (chain,c)!=NULL)
       {
        printf("yes");
       }
       else
       {
        printf("no");

       }
       
       
    
    
    

    return 0;
}





