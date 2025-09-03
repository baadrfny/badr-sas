#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float Pi=3.14159;
    float volume,rayon;

    printf("Entrer le rayon :");
    scanf("%f",&rayon);

    volume = (4/3) * Pi *pow(rayon,3);

    printf("La volume de cette sphere est : %.2f",volume);
    return 0;
}
