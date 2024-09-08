#include <stdio.h>

int main (){
    char str[6], *p;
    int i;

    p = str;
    printf("Digite as 5 letras: ");
    for (i=0; i<5; i++){
        scanf("%c%*c", &p[i]); //c+i
    }
    *(p+i) = '\0';

    printf("%s\n", p);

    p = p + 4;
    printf("a quinta letra eh %c", *p); //p[0]
    
    return 0;
}