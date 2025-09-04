#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,f;
    printf("Entrer un nomber n :");
    scanf("%d",&n);

    f =0;

    if (n<0){
        printf("Entrer un nomber positive\n");
    }
    else 
        if (n==0){
        printf("1");
    }

    else {
    for (int i = 1; i <= n; i++)
    
       f = f+i;
       printf("la factorielle de %d  est : %d",n,f);
    }
    
    return 0;
}

