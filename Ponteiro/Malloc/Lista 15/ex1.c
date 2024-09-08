#include <stdio.h>
#include <stdlib.h>

int alocaMatriz (int **p, int linha, int coluna){
    int i, j;

    p = (int**) malloc (linha * sizeof (int*));
    if (p == NULL)
        exit (EXIT_FAILURE);

    for (i=0; i<linha; i++){
        p[i] = (int*) malloc (coluna * sizeof (int));
        if (p[i] == NULL)
            exit(EXIT_FAILURE);
    }

    return p;
}

void preencheMatriz (int **v, int linha, int coluna){
    int i, j, k;

    printf("Digite um numero para comecar a matriz: ");
    scanf("%d", &k);

    for(i=0; i<linha; i++){
        for(j=0; j<coluna; j++){
            v[i][j] = k;
            k++;
        }
    }
}

void imprimeMatriz (int **v, int linha, int coluna){
    int i, j;

    for(i=0; i<linha; i++){
        for(j=0; j<coluna; j++)
            printf("%d ", v[i][j]);
    }
    printf("\n");
}

int main (){
    int **v, linha, coluna, i;
    
    printf("Digite quantas linhas e quantas colunas: ");
    scanf("%d %d", &linha, &coluna);

    v = alocaMatriz (v, linha, coluna);
    preencheMatriz (v, linha, coluna);
    imprimeMatriz (v, linha, coluna);

    for(i=0; i<linha; i++){
        free(v[i]);
        v[i] = NULL;
    }

    free(v);
    v = NULL;

    return 0;
}