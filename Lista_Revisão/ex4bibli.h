#ifndef EX4BIBLI_H_INCLUDED
#define EX4BIBLI_H_INCLUDED
#define TAM 10


/*Função que recebe por parametro uma matriz quadrada que recebe no maixmo tamanho 10
A função retorna o primeiro numero par da matriz*/
int encontraPrimeiroPar (int m[][TAM], int tamanho);

/*Função que recebe por parametro uma matriz quadrada que recebe no maixmo tamanho 10
A função retorna o maior numero par da matriz*/
int encontraMaior (int m[][TAM], int tamanho);

/*Função que recebe uma matriz inteira quadrada no maixo tamnho 10
A funçã imprime a matriz tranposta*/
void imprimeTransposta (int m[][TAM], int tamanho);

#endif //EX4BIBLI_H_INCLUDED