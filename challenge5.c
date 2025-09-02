#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int etat;
    printf("entrer l etat de l eau :");
    scanf("%d",&etat);

    
    if (etat < 0){
        printf("solid");
    }
    else if(etat > 0 && etat <100){
        printf("liquide");
    }

    else {
         printf("gaz");
    }
   

    
    return 0;
}
