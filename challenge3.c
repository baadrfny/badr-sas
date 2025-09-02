#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float Km,Ya;
    printf("entrer la distance en Kilometres :");
    scanf("%f",&Km);

    Ya = Km * 1093.61;

    printf("La distance en Yards est : %.2f",Ya);
    
    return 0;
}
