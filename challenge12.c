#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main( )
{
    int n,invers;
    printf("Veuillez entrer un nomber ");
    scanf("%d",&n);

    do
    {
        invers = (invers*10)+(n%10);
        n=n/10;

    } while (n!=0);
    printf("L'inverse est : %d",invers);
    
    return 0;
}
