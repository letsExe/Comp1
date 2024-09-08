#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main (){
    FILE *f;
    int n, cont = 0;

    f = fopen("teste.txt", "r");
    if(!f){
        printf("Arquivo nao encontrado\n");
        exit(1);
    }

    while (fscanf (f, "%d", &n) != EOF){
        printf("%d\n", n);
        cont++;   
    }

    printf("total de linhas %d", cont);
    fclose(f);

    return 0;
}