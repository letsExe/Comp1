#include <stdio.h>
#define MAX 100

void printMat (int m[][MAX], int tam){
    int i, j;
    for(i=0; i<tam; i++){
        for(j=0; j<tam; j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }
}

void lerMatriz (int m[][MAX], int tam){
    int i, j;
    for(i=0; i<tam; i++){
        for(j=0; j<tam; j++)
            scanf("%d", &m[i][j]);
    }
}

int somaLinha (int m[][MAX], int tam, int linha){
    int i, soma=0;

    for(i=0; i<tam; i++)
        soma += m[linha][i];

    return soma; 
}

int somaColuna (int m[][MAX], int tam, int coluna){
    int i, soma=0;

    for(i=0; i<tam; i++)
        soma += m[i][coluna];

    return soma; 
}

int somaDiagonalPrinc (int m[][MAX], int tam){
    int i, soma=0;

    for(i=0; i<tam; i++)
        soma += m[i][i];
    
    return soma; 
}

int somaDiagonalSec (int m[][MAX], int tam){
    int i, j, soma=0;

    for(i=tam-1,j=0; i>= 0 && j<tam; i--,j++)
        soma += m[i][i];
    
    return soma; 
}

int verificia (int mat[][MAX], int tam){
    int i, valor, aux;

    valor = somaDiagonalPrinc (mat, tam);
    aux = somaDiagonalSec (mat, tam);
    if (valor != aux) return -1;

    for(i=0; i<tam; i++){
        aux = somaLinha(mat, tam, i);
        if (valor != aux) return -1;
    }

    for (i=0; i<tam; i++){
        aux = somaColuna(mat, tam, i);
        if (valor != aux) return -1;
    }

    return valor;
}

int main (){
    int mat[MAX][MAX];
    int n, valor;

    scanf("%d", &n);

    lerMatriz(mat, n);

    valor = verificia(mat, n);
    printf("%d\n", valor);

    return 0;
}