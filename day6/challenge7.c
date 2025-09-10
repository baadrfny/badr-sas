#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char c;
    

    printf("entrer votre caractere :");
    scanf("%c",&c);

    char upper = toupper(c);

    printf("%c",upper);
    return 0;
}
