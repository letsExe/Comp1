#include <stdio.h>
#include <string.h>

#define MAX 200

typedef struct {
    char cor[MAX];
    char tamanho;
    char nome[MAX];
} CAMISETA;

void ler_CAMISETA(CAMISETA c[], int n){
    int i;

    for(i = 0; i < n; i++){
        scanf("%[^\n]%*c", c[i].nome);
        scanf("%s%*c", c[i].cor);
        scanf("%c%*c", &c[i].tamanho);
    }
}

void ordenaNome(CAMISETA camisetas[], int tam){
    int i = 1, j;
    CAMISETA aux;

    while (i < tam){
        j = i - 1;
        aux = camisetas[i];
        while (j >= 0 && strcmp(camisetas[j].nome, aux.nome) > 0){
            camisetas[j + 1] = camisetas[j];
            j--;
        }
        camisetas[j + 1] = aux;
        i++;
    }
}

void ordenaCor(CAMISETA camisetas[], int tam){
    int i = 1, j;
    CAMISETA aux;

    while (i < tam){
        j = i - 1;
        aux = camisetas[i];
        while (j >= 0 && strcmp(camisetas[j].cor, aux.cor) > 0){
            camisetas[j + 1] = camisetas[j];
            j--;
        }
        camisetas[j + 1] = aux;
        i++;
    }
}

void ordenaTam(CAMISETA camisetas[], int tam){
    int i = 1, j;
    CAMISETA aux;

    while (i < tam){
        j = i - 1;
        aux = camisetas[i];
        while (j >= 0 && camisetas[j].tamanho < aux.tamanho){
            camisetas[j + 1] = camisetas[j];
            j--;
        }
        camisetas[j + 1] = aux;
        i++;
    }
}

void print_CAMISETA(CAMISETA c[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%s ", c[i].cor);
        printf("%c ", c[i].tamanho);
        printf("%s\n", c[i].nome);
    }
}

int main(){
    int n;
    CAMISETA c[MAX];
    scanf("%d%*c", &n);
    while(n){
        ler_CAMISETA(c, n);
        ordenaNome(c, n);
        ordenaTam(c,n);
        ordenaCor(c, n);

        print_CAMISETA(c, n);
        scanf("%d%*c", &n);
        if(n) printf("\n");
    }
    return 0;
}
