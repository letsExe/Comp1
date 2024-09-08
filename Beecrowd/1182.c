#include <stdio.h>
#define MAX 12

void printMat (int m[][MAX], int tam){
    int i, j;
    for(i=0; i<tam; i++){
        for(j=0; j<tam; j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }
}

void lerMatrizColuna (int m[][MAX], int n){
    int i, j;
    for(i=1; i==1; ){
        for(j=n; j==n; )
            scanf("%d", &m[i][j]);
    }
}

float somaColuna (float m[][MAX], int tam, int coluna){
    int i;
    float soma=0;

    for(i=0; i<tam; i++)
        soma += m[i][coluna];

    return soma; 
}

float mediaColuna (float m[][MAX], int tam, int coluna){
    int i, soma=0;

    for(i=0; i<tam; i++)
        soma += m[i][coluna];

    return soma/tam; 
}

int main (){
    float valor, mat[MAX][MAX];
    int n;
    char ch;

    scanf("%d", &n);
    scanf("%c", &ch);
    if (ch == 'S'){
        lerMatrizColuna(mat, n);
        valor = somaColuna(mat, MAX, n);
        printf("%.2f\n", valor);
    }
    else   
        if (ch == 'M'){
            lerMatrizColuna (mat, n);
            valor = mediaColuna(mat, MAX, n);
            printf("%.2f\n", valor);
        }

    return 0;
}