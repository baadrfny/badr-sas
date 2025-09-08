#include <stdio.h>

long long fibonacci(int n){
    return n<=1 ? n : fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int x;
    scanf("%d", &x);
    printf("%lld", fibonacci(x));
    return 0;
}
