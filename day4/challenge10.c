
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int length;
    printf("Entrez la longueur du mot de passe: ");
    scanf("%d", &length);

    char chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    int size = sizeof(chars) - 1;

    srand(time(NULL));
    printf("Mot de passe: ");
    for (int i = 0; i < length; i++) {
        printf("%c", chars[rand() % size]);
    }
    printf("\n");
    return 0;
}
