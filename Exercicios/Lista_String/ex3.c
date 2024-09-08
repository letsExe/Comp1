#include <stdio.h>
#include <string.h>
#define TAM 100

int isvogal(char c){
    char VOGAIS[]="aeiouAEIOU";

    return strchr(VOGAIS, c) != NULL;
}

int contar_vogais(char s[]){
    int i, c;
    for(c=i=0;s[i];i++)
        c+=isvogal(s[i]);

    return c;
}


int main (){
    char str[TAM];
    int c;
    scanf("%[^\n]%*c", str);
    c = contar_vogais(str);

    printf ("Tem %d de voigais na string %s", c, str);

    return 0; 
}