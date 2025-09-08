#include <stdio.h>

long long factorielle(int n){
    return n==0 ? 1 : n*factorielle(n-1);
}

int main() {
    int x;
    scanf("%d", &x);
    printf("%lld", factorielle(x));
    return 0;
}
