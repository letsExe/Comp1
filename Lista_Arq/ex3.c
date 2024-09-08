#include <stdio.h>
#include <stdlib.h>

int contarLetras (FILE *f){
    int cont=0;
    char letra;

    while ((letra = fgetc(f)) != EOF){ 
        if(letra != ' ' && letra != '\n')
            cont++;
    }
    return cont;
}

int contarPalavras (FILE *f){
    char palavra[50];
    int cont=0;

    while( fscanf (f,"%s", palavra) != EOF){
        cont++;
    }
    return cont;
}

int main (){
    FILE *f;
    char letra;
    int numLetras, numPalavras;

    f = fopen("texto.txt", "a+");
    if(!f){
        printf("Arquivo nao encontrado\n");
        exit(1);
    }

    numLetras = contarLetras(f);
    printf("O numero de letra eh %d\n", numLetras);

    rewind(f);

    numPalavras = contarPalavras(f);
    printf("O numero de palvras eh %d\n", numPalavras);

    fprintf(f,"O numero de letra eh %d\n", numLetras);
    fprintf(f, "O numero de palvras eh %d\n",numPalavras);

    fclose(f);

    return 0;
}