#include <stdio.h>
#include <string.h>
#define MAX 100

int stringlen (char ch[]){
    int i, tam=0;

    i=0;
    while (ch[i] != '\0'){
        tam++;
        i++;
    }
    return tam;
}

int main (){
    char palavra[]="FELICIDADE";
    int i, tam;

    tam = stringlen (palavra);
    for(i=tam-1; i>=0; i--){
        printf ("%c", palavra[i]);
    }

    return 0;
}