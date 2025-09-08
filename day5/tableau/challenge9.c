#include <stdio.h>

int main() {
    int tab[] = {1,2,3,4,5};
    for(int i=0;i<2;i++){
        int t = tab[i];
        tab[i] = tab[4-i];
        tab[4-i] = t;
    }
    for(int i=0;i<5;i++)
        printf("%d ", tab[i]);
    return 0;
}
