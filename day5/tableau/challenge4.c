#include <stdio.h>

int main() {
    int tab[] = {1,3,5,2,4};
    int max = tab[0];
    for(int i=1;i<5;i++)
        if(tab[i]>max) max = tab[i];
    printf("%d", max);
    return 0;
}
