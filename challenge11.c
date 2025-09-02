#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float surface,longueur,largeur;

    printf("Entrer la longueur :");
    scanf("%f",&longueur);
    printf("Entrer largueur :");
    scanf("%f",&largeur);
     
    surface = longueur * largeur;

    printf("La surface de cette Rectangle est : %.2f",surface);


    return 0;
}
