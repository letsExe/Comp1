#include <stdio.h>
#include <string.h>
#define TAM 100


int main (){
    int i, tam, conta=0;
    char str[TAM];
    
    scanf("%[^\n]%*c", str);
    tam = strlen(str);
    for(i=0; i<tam; i++){
        if(str[i] == ' '){
            conta++;
        }
    }
    printf("A quantidade de palavras eh %d", conta);

    return 0;
}