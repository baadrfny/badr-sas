#include <stdio.h>
#include <string.h>

int main()
{
    
    char caracter[50];
    int i=0;

       printf("entrer un caractere ou une chaine :");
       fgets(caracter, 50, stdin);
    
       while (caracter[i] != '\0')
        i++;
        printf("%d",i-1);
        

       
       

    return 0;
}
