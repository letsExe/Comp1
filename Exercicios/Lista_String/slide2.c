#include <stdio.h>
#include <string.h>

int main (){
    char nome[20];
    int tam, i;

    printf("Digite um nome: ");
    scanf("%s", nome);

    tam = strlen(nome);
    for(i= tam-1; i>=0; i--){
        printf("%c", nome[i]);
    }

    return 0;
}