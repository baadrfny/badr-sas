#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char car;

    printf("Entrrer un caractrer :" );
    scanf("%c",&car);

    char low = tolower(car);
    printf("%c",low);
    return 0;
}
