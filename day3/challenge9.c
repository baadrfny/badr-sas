
#include <stdio.h>

int main()
{
    int i = 0, n;

    printf("Entrez un nombre n : ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Veuillez entrer un entier positif");
    }
    else
    {
        while (n > 0)
        {
            n = n / 10;
            i++;
        }
        
    }

    printf("Nombre de chiffres est : %d", i);
    
    return 0;
}
