#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b ;
    
    printf("Entrer le nombre a :");
    scanf("%f",&a);
    printf("Entrer le nombre b :");
    scanf("%f",&b);

    
    printf("\n--- Resultats ---\n");
    printf(" %f + %f = %f\n",a,b,a+b);
    printf(" %f - %f = %f\n",a,b,a-b);
    printf(" %f x %f = %f\n",a,b,a*b);
    printf(" %f / %f = %f\n",a,b,a/b);


    return 0;
}
