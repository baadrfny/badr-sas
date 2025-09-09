#include <stdio.h>

long long factorielle(int n) {
    if (n == 0) {
        return 1;  
    } else {
        return n * factorielle(n - 1); 
    }
}

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("%lld\n", factorielle(x));
    return 0;
}

