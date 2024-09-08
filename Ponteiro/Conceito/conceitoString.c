#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *getfirst(char *dst, char *src){
    char *p = dst;

    for( ; *src != '\0' && !isspace(*src); dst++, src++)// nao pode str != isspace
        *dst = *src;

    *dst = '\0';
    return p;
}

int main (){
    char src[101], dst[101];
    
    scanf("%[^\n]%*c", src);
    while (strcmp(src, "fim") != 0){
        printf("> [%s]\n", getfirst(dst, src));
        scanf("%[^\n]%*c", src);
    }
    return 0;
}