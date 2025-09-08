#include <stdio.h>

int main() {
    int tab[] = {1,2,3,4,5};
    int x;
    scanf("%d", &x);
    for(int i=0;i<5;i++)
        if(tab[i]==x) {
            printf("%d", i);
            break;
        }
    return 0;
}
