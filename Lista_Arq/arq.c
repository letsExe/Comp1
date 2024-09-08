#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main (){
    FILE *f;
    
    f = fopen("texto.txt", "w");
    if(f == NULL){
        printf("Caminho de arquivo nao encontrado\n");
        exit(1);
    }

    
    fprintf (f, "fruta\n");
    fprintf(f, "bola\n");
    fprintf(f, "contexto\n");
    fprintf(f, "sistemas\n");

    fclose(f);    

    return 0;
}