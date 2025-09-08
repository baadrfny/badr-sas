#include <stdio.h>

int main() {
    int tab[] = {1, 3, 5, 7, 9, 11, 13};
    int n = sizeof(tab)/sizeof(tab[0]);
    int x;

    printf("Entrez l'element a rechercher: ");
    scanf("%d", &x);

    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (tab[mid] == x) {
            printf("element trouve a l'index %d\n", mid);
            return 0; 
        } else if (tab[mid] < x) {
            low = mid + 1; 
        } else {
            high = mid - 1; 
        }
    }

    printf("element non trouve\n"); 
    return 0;
}
