#include <stdio.h>

int main() {
    int tab[] = {1,2,3,4,5};
    for(int i=0;i<5;i++)
        if(tab[i]%2!=0)
            printf("%d ", tab[i]);
    return 0;
}
