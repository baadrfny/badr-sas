#include <stdio.h>

int main() {

     int n;
    printf("entrer le nomber element :");
    scanf("%d", &n);
    int tab[n];
    
    
    int sum = 0;
    for(int i=0;i<5;i++)
        sum += tab[i];
    printf("la somme du tableu : %d", sum);
    return 0;
}
