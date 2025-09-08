#include <stdio.h>

int maximum(int a, int b){
    return a>b ? a : b;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d", maximum(x,y));
    return 0;
}
