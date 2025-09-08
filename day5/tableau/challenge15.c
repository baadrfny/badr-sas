#include <stdio.h>

int main() {
    int a[] = {1,2,3};
    int b[] = {4,5};
    int c[5];
    int k=0;
    for(int i=0;i<3;i++)
        c[k++] = a[i];
    for(int i=0;i<2;i++)
        c[k++] = b[i];
    for(int i=0;i<5;i++)
        printf("%d ", c[i]);
    return 0;
}
