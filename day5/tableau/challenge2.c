#include <stdio.h>

int main() {
    int n;
    printf("entrer le nomber element :");
    scanf("%d", &n);
    int tab[n];
    for(int i=0;i<n;i++)

        scanf("%d", &tab[i]);
    for(int i=0;i<n;i++)
        printf("T(%d) = %d ", i+1,tab[i]);
    return 0;
}
