#include <stdio.h>

int main() {
    int tab[] = {1,2,3,2,4};
    int a,b;
    scanf("%d %d", &a, &b);
    for(int i=0;i<5;i++)
        if(tab[i]==a)
            tab[i] = b;
    for(int i=0;i<5;i++)
        printf("%d ", tab[i]);
    return 0;
}
