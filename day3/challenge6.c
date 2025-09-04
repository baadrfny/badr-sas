#include <stdio.h>

int main()
{
    int  n;

    printf("Entrez un nombre entier n : ");
    scanf("%d", &n);

    printf("Les %d premiers nombres pairs sont :", n);

    for(int i = 0; i < n; i++)
    {
        printf("%d", 2 * i);

        if (i < n - 1) {
            printf(", ");
        }

    }
    printf("\n");

    return 0;
}