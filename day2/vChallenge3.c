#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x,y,somme;
    printf("Veuillez entrer la valeur de x :");
    scanf("%d",&x);
    printf("Veuillez entrer la valeur de y :");
    scanf("%d",&y);

    if  (x==y){
        somme = x+y;
        printf("( %d + %d ) * 3 = %d",x,y,somme*3);

    }
    else
         printf("%d + %d = %d",x,y,x+y);
    
    return 0;
}
