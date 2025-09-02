#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float C,K;
    printf("entrer la temperature en Celsuis :");
    scanf("%f",&C);

    K = C + 273.15;

    printf("La temperature en Kelvin est : %.2f",K);
    return 0;
}
