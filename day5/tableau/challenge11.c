#include <stdio.h>

int main() {
    int tab[] = {1,2,3,4,6};
    int a,b;
    printf("entrer les deuc valeur pour remplacer :");
    scanf("%d %d", &a, &b);
    for(int i=0;i<5;i++)
        if(tab[i]==a)
            tab[i] = b;
    for(int i=0;i<5;i++)
        printf("%d ", tab[i]);
    return 0;
}
