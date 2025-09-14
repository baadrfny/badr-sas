#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct{
    int x,y;

}Point;

int main(){

    Point p;
    Point *ptr = &p;
    ptr->x = 10;
    ptr->y=20;

    printf("%d %d ",ptr->x,ptr->y);
    return 0;

}
