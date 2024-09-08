#ifndef FUNCAO_H
#define FUNCAO_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 20

typedef struct{
    int tipo;
    char genero;
    char nome[MAX];
} CADASTRO;

//Funcao para ler o nome e tipo do arquivo
void leitura(char arq[MAX], char ch[MAX]);

//Função que recebe o nome do arq e oq quer fazer com ele
FILE* lerdados (char nomeArq[], char ch[]);

//Funcao para contar qnts linhas tem o arquvo de entrada
int numLinhas (char arq[], char ch[]);

//Funcao que aloca a o tamando do vetor struct para guarda
//o numero e o nome de cada pet na struct
CADASTRO *alocaPets (int n, char arq[], char ch[]);

//Funcao que cria dois novo arquivos separando em macho e femea
void gravaPets (CADASTRO *pets, int n, int *contm, int *contf);

//Funão que le os dois arquivos criados e conta quantos caes e gatos 
//macho tem e quatos caes e gato femea tem 
void contaMachoFemea(int nm, int nf);

#endif 