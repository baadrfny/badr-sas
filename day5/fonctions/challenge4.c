#include <stdio.h>

int maximum(int a, int b) {
    
    if (a<b)
    {
        printf("%d est superieur a %d ",a,b);
    }
    else {
        printf("%d est superieur a %d",b,a);
    }
    
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    maximum(a,b);
    return 0;
}

