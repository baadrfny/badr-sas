#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main( )
{
    int n;
    printf("Nombre decimal : ");
    scanf("%d", &n);
    
    printf("Hexadecimal : %X\n", n);
    printf("Binaire : ");
    
    printf("%d", (n/128)%2);
    printf("%d", (n/64)%2);
    printf("%d", (n/32)%2);
    printf("%d", (n/16)%2);
    printf("%d", (n/8)%2);
    printf("%d", (n/4)%2);
    printf("%d", (n/2)%2);
    printf("%d", n%2);
    printf("\n");

    return 0;
}