#include <stdio.h>

int minimum(int a, int b){
    return a<b ? a : b;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d", minimum(x,y));
    return 0;
}
