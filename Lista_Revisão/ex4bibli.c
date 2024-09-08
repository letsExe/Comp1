#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "ex4bibli.h"
#define TAM 10

int encontraPrimeiroPar (int m[][TAM], int tamanho){
    int i, j, par;

    for (i=0; i<tamanho; i++){
        for (j=0; j<tamanho; j++){
            if (m[i][j]%2 == 0){
                par = m[i][j];
                return par;
            }
        }
        //break;
    }
    return 0;
}

int encontraMaior (int m[][TAM], int tamanho){
    int i, j, maior;

    maior = encontraPrimeiroPar(m, tamanho);
    for (i=0; i<tamanho; i++){
        for (j=0; j<tamanho; j++){
            if ((m[i][j] > maior) && (m[i][j]%2 == 0)){
                maior = m[i][j];
            }
        }
    }
    return maior;
}

void imprimeTransposta (int m[][TAM], int tamanho){
    int i, j;

    for(j=0; j<tamanho; j++){
        for(i=0; i<tamanho; i++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}