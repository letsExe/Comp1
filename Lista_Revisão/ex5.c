#include <stdio.h>
#include <string.h>
#define MAX 100

int contaPalvras (char frase[]){
    int i, cont = 0, tam;

    tam = strlen(frase);
    for(i=1; i<tam; i++){
        if (frase[i] == ' ' && frase[i-1] != ' '){
            cont++;
        }
        else 
            if (frase[i] == '\0' && frase[i-1] != ' ')
                cont++;
    }
    return cont;

}

int main (){
    char frase[MAX];
    int quantidade;

    scanf("%[^\n]%*c", frase);

    quantidade = contaPalvras (frase);
    printf ("A quantidade de palavras eh %d", quantidade);

    return 0;
}