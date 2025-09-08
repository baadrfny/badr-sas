#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int tab[n];
    for(int i=0;i<n;i++)
        scanf("%d", &tab[i]);
    for(int i=0;i<n;i++)
        printf("%d ", tab[i]);
    return 0;
}
