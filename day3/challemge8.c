#include <stdio.h>

int main()
{
    int n, t1, t2, suivant;
    
    t1 = 0;
    t2 = 1;

    printf("Entrez le nombre n : ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Veuillez entrer un nombre positif.");
    }
    else
    {
        for (int i = 1; i <= n ;i++){
            printf(" %d ,",t1);
            suivant = t1+t2;
            t1 = t2;
            t2 = suivant;
        }
    }
    
    

    return 0;
}