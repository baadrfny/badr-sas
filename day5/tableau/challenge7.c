#include <stdio.h>

int main() {
    int tab[] = {5,2,4,1,3};
    for(int i=0;i<4;i++)
        for(int j=0;j<4-i;j++)
            if(tab[j]>tab[j+1]) {
                int t = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = t;
            }
    for(int i=0;i<5;i++)
        printf("%d ", tab[i]);
    return 0;
}
