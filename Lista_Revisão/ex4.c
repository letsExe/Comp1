#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "ex4bibli.h"
#define TAM 10

int main (){
    int m[TAM][TAM];
    int i, j, opcao, maior;

    srand(time(NULL));

    for(i=0; i<TAM; i++){
        for (j=0; j<TAM; j++){
            m[i][j] = rand () % 1000;
        }
    }

    do {
        printf("1 - Encontrar o maior numero par existente na matriz\n");
        printf("2 - Imprimir a matriz transposta\n");
        printf("3 - Sair\n");
        scanf("%d", &opcao);

        switch (opcao){
        case 1: 
            maior = encontraMaior(m, TAM);
            printf ("O maior valor par da matriz eh %d\n", maior);
            break;

        case 2:
            imprimeTransposta(m, TAM);
            break;

        case 3:
        printf("Tchau\n");
            break;

        default:
            printf("Digite novamente");
            scanf("%d", &opcao);
            break;
        }
    }while (opcao != 3);

    return 0;
}