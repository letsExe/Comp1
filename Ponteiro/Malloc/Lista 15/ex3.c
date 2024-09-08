#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
#define MIN 3

typedef struct {
    char nome[MAX];
    float preco;
    int dias[MIN];
}EVENTO;

void lerValores (EVENTO *p, int *n){
    int i, j, d;

    for(i=0; i<*n; i++){
        printf("Digite o nome do evento %d; ", i+1);
        scanf("%s", p[i].nome);

        printf("Digite o preco: ");
        scanf("%f", &(p+i)->preco);

        printf("Digite quantos dias tera o evento: ");
        scanf("%d", &d);
        printf("Digite os dias: ");

        for(j=0; j<d; j++)
            scanf("%d", &p[i].dias[j]);
    }
}

void impreEvento (EVENTO *p, int *n){
    int i, j;
    for(i=0; i<*n; i++){
        printf("Nome: %s\n", (p+i)->nome);
        printf("Preço: %f\n", p[i].preco);
        printf("Dias: ");
        for(j=0; j<MIN; j++)
            printf("%d ", p[i].dias[j]);
    }
}

int main (){
    int n;
    EVENTO *p;

    printf("Qunatos eventos deseja cadastrar: ");
    scanf("%d", &n);

    p = (EVENTO*) malloc (n * sizeof(EVENTO));
    if (p == NULL)
        exit (EXIT_FAILURE);

    lerValores (p, &n);
    impreEvento(p, &n);

    return 0;
}