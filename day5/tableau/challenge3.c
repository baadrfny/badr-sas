#include <stdio.h>

int main() {

     int n;
    printf("entrer le nomber element :");
    scanf("%d", &n);
    int tab[n];
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        printf("entrer le T[%d]",i+1);
        scanf("%d",&tab[i]);
        sum+=tab[i];
    }
    printf("La somme est : %d",sum);
    
    
   
    
    return 0;
}
