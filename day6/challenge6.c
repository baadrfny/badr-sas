#include <stdio.h>
#include <string.h>

int main() {
    char chain[100];
    int count=0;
    char c;

    printf("veuillez entrer une chaine :");
    fgets(chain,100,stdin);
    printf("veuillez entrer un caracctere :");
    scanf(" %c",&c);

    for (int i = 0;chain[i] !='\0'; i++)
    {
        if (chain[i] == c)
        {
            count++;
        }
        
        
        
    }
    printf("%d",count);
    

    return 0;
}
