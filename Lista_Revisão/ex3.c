#include <stdio.h>
#define MAX 3

void lerMatriz (int mat[][MAX]){ //matriz quadrada
    int i, j;

    for(i=0; i<MAX; i++){
        for(j=0; j<MAX; j++){
            scanf("%d", &mat[i][j]);
        }
    }
}

void printMatriz (int mat[][MAX]){ //matriz quadrada
    int i, j;

    for(i=0; i<MAX; i++){
        for(j=0; j<MAX; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int simetrica (int mat[][MAX]){
    int i, j;

    for(i=0; i<MAX; i++){
        for(j=0; j<MAX; j++){
            if (mat[i][j] == mat[j][i]) return 1;
        }
    }
    return 0;

}

int main (){
    int mat[MAX][MAX];
    int sim;

    sim = simetrica(mat);

    lerMatriz(mat);
    if (sim == 1){
        printMatriz(mat);
        printf("A matriz eh simetrica\n");
    }
    else {
        printf("A matriz nao eh simetrica\n");
    }

    return 0;
}