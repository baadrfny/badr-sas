#include <stdio.h>

int main() {
    int tab[] = {1,2,3,4,5};
    int sum = 0;
    for(int i=0;i<5;i++)
        sum += tab[i];
    printf("%f", (float)sum/5);
    return 0;
}
