#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

//pegar a ultima palavra da string

char *ultimapalavra (char *orgiem1, char *orgiem2){
    char *p;

    p = strchr(orgiem2, '\0');
    for ( ; p>=orgiem2 && !isspace(*p); p--);

    return (strcpy(orgiem1, p+1)); //++p
}

int main (){
    char orgiem[MAX], dest[MAX];

    scanf ("%[^\n]%*c", orgiem);

    while (strcmp(orgiem, "fim") != 0){ 
        printf("[%s]\n", ultimapalavra(dest, orgiem));
        scanf ("%[^\n]%*c", orgiem);
    } 

    return 0;
}