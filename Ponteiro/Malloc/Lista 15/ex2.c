#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void lerNomes (char **m, int linha){
    int i;

    for(i=0; i<linha; i++){
        printf("Digite o %d nome: ", i+1);
        scanf("%s", *(m+i)); //&m[i]
    }
}

int achaMaiorNome (char **m, int linha, int coluna){
    int i, maior;

    maior = strlen(m[0]);

    for(i=1; i<linha; i++){
        if (strlen(m[i]) > maior){
            maior = strlen(m[i]);
        }
    }
    printf("maior: %d\n", maior);
    return maior; 
}

void copiaMatriz(char **m, char **m2, int linha){
    int i;

    for(i=0; i<linha; i++){
        strcpy(m2[i], m[i]);
    }
}

int main (){
    int linha, coluna, i, maior;
    char **m, **m2;

    printf("Digite quantos nomes vc quer cadastrar: ");
    scanf("%d", &linha);
    printf("Digite o maximo de letras em cada nome: ");
    scanf("%d", &coluna);

    m = (char**) malloc (linha * sizeof(char*));
    if (m == NULL){
        printf("Memoria insuficiente\n");
        exit (1);
    }

    for (i=0; i<linha; i++)
        m[i] = (char*) malloc (coluna+1 * sizeof(char));
        if (m[i] = NULL)
            exit (1);

    lerNomes(m, linha);
    maior = achaMaiorNome (m, linha, coluna);

    m2 = (char**) malloc (linha * sizeof(char*));
    if (m2 == NULL){
        printf("Memoria insuficiente\n");
        exit (1);
    }

    for (i=0; i<linha; i++)
        m2[i] = (char*) malloc (maior+1 * sizeof(char));
        if (m2[i] = NULL)
            exit (1);

    copiaMatriz(m, m2, linha);

    for(i=0; i<linha; i++)
        printf("%s\n", m2[i]);

    return 0;
}