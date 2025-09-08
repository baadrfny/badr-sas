#include <stdio.h>
#include <string.h>

void inverser_chaine(char str[]){
    int i=0,j=strlen(str)-1;
    while(i<j){
        char t = str[i];
        str[i] = str[j];
        str[j] = t;
        i++;
        j--;
    }
}

int main() {
    char s[100];
    scanf("%s", s);
    inverser_chaine(s);
    printf("%s", s);
    return 0;
}
