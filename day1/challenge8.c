#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c,moyenne;
    printf("Entrer le 1er nomber :");
    scanf("%f",&a);
    printf("Entrer le 2eme nomber :");
    scanf("%f",&b);
    printf("Entrer le 3eme nomber :");
    scanf("%f",&c);


    moyenne = pow(a*b*c, 1/3);

    printf("La moyenne geometrique des 3 nomber est : %.2f",moyenne);
    
    return 0;
}
