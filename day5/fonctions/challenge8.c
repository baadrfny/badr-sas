#include <stdio.h>

int est_pair(int n){
    return n%2==0 ? 1 : 0;
}

int main() {
    int x;
    scanf("%d", &x);
    printf("%d", est_pair(x));
    return 0;
}
