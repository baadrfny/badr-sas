#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Veuillez entrer un nombre : ");
    scanf("%d", &n);

    printf("Facteurs de %d : ", n);

    int limite = sqrt(n);

    //hiiii

    
    for (int i = 1; i <= limite; i++)
    {
        if (n % i == 0)
        {
            printf("%d", i);
            if (i != n / i)
            {
                printf(", %d", n / i);
            }
            if (i != limite || i != n / i) 
                printf(", ");
        }
    }

    printf("\n");
    return 0;
}
