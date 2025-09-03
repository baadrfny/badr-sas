#include <stdio.h>

int main() {
    float x1, y1, x2, y2, x, y;
    
    printf("Point A (x1 y1): ");
    scanf("%f %f", &x1, &y1);
    
    printf("Point B (x2 y2): ");
    scanf("%f %f", &x2, &y2);
    
    printf("Point a tester (x y): ");
    scanf("%f %f", &x, &y);
    
    float pente1 = (y - y1) / (x - x1);
    float pente2 = (y2 - y1) / (x2 - x1);
    
   
    int entre_x = 0;
    int entre_y = 0;
    
    if ((x >= x1 && x <= x2) || (x <= x1 && x >= x2)) {
        entre_x = 1;
    }
    
    if ((y >= y1 && y <= y2) || (y <= y1 && y >= y2)) {
        entre_y = 1;
    }
    
    
    if (pente1 == pente2 && entre_x && entre_y) {
        printf("Le point est SUR le segment !\n");
    } else {
        printf("Le point n'est PAS sur le segment.\n");
    }
    
    return 0;
}