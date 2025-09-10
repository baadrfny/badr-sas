#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char car[100]="hello guys, how are you ?";
    int j=0;
    
    
    for (int i = 0; car[i] != '\0'; i++)
    {
        if (car[i] != ' ')
        {
            car[j] = car[i];
            j++;
        }
        
    }
    car[j] = '\0';
    puts(car);
    

    

    
    return 0;
}
