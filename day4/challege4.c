#include <stdio.h>
#include <math.h>

int main()
{
    int n,inverse;
    printf("Veuillez entrer un nomber :");
    scanf("%d",&n);

    while (n != 0)
    {
        int x = n%10;
        inverse = inverse * 10 + x;
        n /=10;
    }
    printf("%d",inverse);

    //add
    
    
    return 0;
}
