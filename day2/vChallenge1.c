#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    printf("Veuillez entrer un nombre :");
    scanf("%d",&n);

    if (n%2 == 0)
    {
        printf("Pair");
    }
    else 
        printf("Impair");
    
    return 0;
}
