#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, u, up, upp;

    do
    {
        printf("Veuillez entrer un nombre : ");
        scanf("%d", &n);
    } while (n < 2);

    upp = 0;
    up = 1;

    printf("F0 = %d\n", upp);
    printf("F1 = %d\n", up);

    for (int i = 2; i <= n; i++)
    {
        u = upp + up;
        printf("F%d = %d\n", i, u);
        upp = up;
        up = u;
    }

    return 0;
}
