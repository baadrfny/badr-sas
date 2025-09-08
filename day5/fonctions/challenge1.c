#include <stdio.h>

int somme(int a, int b){
    return a + b;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d", somme(x,y));
    return 0;
}
