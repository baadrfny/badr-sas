#include <stdio.h>

int main() {
    int tab[] = {1,2,3,4,5};
    int facteur;
    scanf("%d", &facteur);
    for(int i=0;i<5;i++)
        tab[i] *= facteur;
    for(int i=0;i<5;i++)
        printf("%d ", tab[i]);
    return 0;
}
