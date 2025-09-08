#include <stdio.h>

int produit(int a, int b){
    return a * b;
}

int main() {
    int x, y;
    printf("Veuillez rntrer deux nomber :");
    scanf("%d %d", &x, &y);
    printf("%d", produit(x,y));
    return 0;
}
