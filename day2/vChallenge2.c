#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char c;
    printf("Entrer un letter d alphabet :");
    scanf("%c",&c);

    switch (c)
    {
    case 'a': case 'e' : case 'i' : case 'o' : case 'u':
        printf("Voyelle ");
        
    
        break;
    
    default:
        printf("N'est pas voyelle");
        break;
    }
    return 0;
}
