#include <stdio.h>
#include <string.h>
#define MAX 100

int main (){
    char palavra1[MAX], palavra2[MAX], palavra3[MAX];
    int tam1, tam2, tam3;

    printf ("Digite tres nomes: ");
    scanf ("%s %s %s", palavra1, palavra2, palavra3);
    
    tam1 = strlen (palavra1);
    tam2 = strlen (palavra2);
    tam3 = strlen (palavra3);

    if (tam1>tam2 && tam1>tam3)
            printf("%s eh o maior com tamanho %d\n", palavra1, tam1);

    else
        if (tam2>tam3)
            printf("%s eh o maior com tamanho %d\n", palavra2, tam2);
    
    else
        printf("%s eh o maior com tamanho %d\n", palavra3, tam3);
    
    return 0;
}