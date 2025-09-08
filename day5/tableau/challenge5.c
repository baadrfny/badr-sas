#include <stdio.h>

int main() {
    int tab[] = {1,3,5,2,4};
    int min = tab[0];
    for(int i=1;i<5;i++)
        if(tab[i]<min) min = tab[i];
    printf("%d", min);
    return 0;
}
