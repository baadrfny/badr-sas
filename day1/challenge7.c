#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,moyenne;
    printf("Entrer le 1er nomber :");
    scanf("%f",&a);
    printf("Entrer le 2eme nomber :");
    scanf("%f",&b);
    printf("Entrer le 3eme nomber :");
    scanf("%f",&c);

    moyenne = (a*2 + b*3 + c*5)/(2+5+3);

    printf("La moyenne ponderee des 3 nomber est : %.2f",moyenne);
    
    
    return 0;
}
