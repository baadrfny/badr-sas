#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{

    float rayon;


}Cercle;

float aire(Cercle c){
    return 3.14 * c.rayon * c.rayon;
}

int main (){

    Cercle c;
    printf("entrer rayon :");
    scanf("%f",&c.rayon);
    printf("%.2f",aire(c));
    return 0;

}
