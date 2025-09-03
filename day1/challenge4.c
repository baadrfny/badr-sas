#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float vtsK,vtsM;

    printf("Veuillez entrer la vitesse en (Km/h) :");
    scanf("%f",&vtsK);

    vtsM = vtsK * 0.27778;

    printf("La vitesse en m/s est : %f",vtsM);
    
       return 0;
}
