#include <stdio.h>
#include <stdlib.h>
#include <string.h>



struct Rectangle{
    float largeur ,longueur;

};


void CalRec(float largeur ,float longueur){
    printf("= %.2f",largeur * longueur);
    return 0;

};

int main(){
    struct Rectangle rec1;
    float largeur,longueur;
    printf("largeur :");
    scanf("%f",&largeur);
    printf("longueur :");
    scanf("%f",&longueur);
    CalRec(largeur , longueur);



return 0;
};
