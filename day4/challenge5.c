#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,res ;
    printf("Veuillez entrer un nomber ");
    scanf("%d",&n);

    res = n*(n+1)/2;

    printf("%d ",res);
    return 0;
}
