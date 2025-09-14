#include <stdio.h>
#include <stdlib.h>

typedef struct Noeud{

    int valeur;
    struct Noeud* gauche;
    struct Noued* droite;


}Noued;

Noued* creer(int v){
Noued* n = malloc (sizeof(Noued));
n->valeur=v;
n->gauche=n->droite=NULL;
return n;
}

void prefixe(Noued* n){
    if(n==NULL) return ;
    printf("%d ",n->valeur);
    prefixe(n->gauche);
    prefixe (n->droite);



}


int main(){
    Noued* racine=NULL;
    int n;
    scanf("%d",&n);
    if(n>0){
        racine = creer(1);
        racine->gauche = (n>1)?creer(2):NULL;
        racine->droite = (n>2)?creer(3):NULL;
    }
    prefixe(racine);
         return 0;
}
