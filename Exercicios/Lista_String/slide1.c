#include <stdio.h>
#include <string.h>

int main (){
    char palavra1[15], palavra2[15];
    int cmp;

    printf("Digite duas palavras\n");
    scanf ("%s %s", palavra1, palavra2);

    cmp = strcmp(palavra1, palavra2);

    if (cmp == -1){
        printf ("A palavra %s vem antes", palavra1);
    }
    else
        if (cmp == 1){
            printf ("A palavra %s vem antes", palavra2);
        }
    else 
        if (cmp == 0)
            printf ("As palavras são iguas\n");
    


    return 0; 
}