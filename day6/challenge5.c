#include <stdio.h>
#include <string.h>

int main() {
    char chaine[100];

    printf("Entrez une chaine : ");
    fgets(chaine, sizeof(chaine), stdin);


    chaine[strcspn(chaine, "\n")] = '\0';

    int debut = 0;
    int fin = strlen(chaine) - 1;


    while (debut < fin) {
        char temp = chaine[debut];
        chaine[debut] = chaine[fin];
        chaine[fin] = temp;

        debut++;
        fin--;
    }

    printf("Chaine inversee : %s\n", chaine);

    return 0;
}
