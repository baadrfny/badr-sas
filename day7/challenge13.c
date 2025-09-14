#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {

    int x;
    int y;

}Point;


typedef struct {

    Point* tab;
    int n;


}Graphique;


void ajouter(Graphique* g,int x, int y){
    g->tab = realloc(g->tab,(g->n+1)*sizeof(Point));
    g->tab[g->n].x=x;
    g->tab[g->n].y=y;
    g->n++;
}


void afficher(Graphique g){

    for(int i=0;i<g.n;i++){
        printf("(%d,%d)\n",g.tab[i].x,g.tab[i].y);
    }

}


int main (){
    Graphique g={NULL,0};
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int x,y;
        scanf("%d %d ",&x,&y);
        ajouter(&g,x,y);
    }
    afficher(g);
    free(g.tab);

    return 0;
}
