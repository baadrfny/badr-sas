#include <stdio.h>

int minimum(int a, int b) {
    
    if (a<b)
    {
        printf("%d est inferieur a %d ",a,b);
    }
    else {
        printf("%d est inferieur a %d",b,a);
    }
    
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    minimum(a,b);
    return 0;
}

