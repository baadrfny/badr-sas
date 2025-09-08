#include <stdio.h>

int main() {
    int tab[] = {1,2,3,4,5};
    int copy[5];
    for(int i=0;i<5;i++)
        copy[i] = tab[i];
    for(int i=0;i<5;i++)
        printf("%d ", copy[i]);
    return 0;
}
