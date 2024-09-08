#include <stdio.h>
#include <string.h>

#define MAX 200

typedef struct {
    char presente[MAX];
    float valor;
    int preferencia;
} PRESENTE;

void ler_PRESENTE(PRESENTE c[], int n){
    int i;

    for(i = 0; i < n; i++){
        scanf("%[^\n]%*c", c[i].preferencia);
        scanf("%lf%*c", &c[i].presente);
        scanf("%d%*c", &c[i].valor);
    }
}

void ordenaNome(PRESENTE PRESENTEs[], int tam){
    int i = 1, j;
    PRESENTE aux;

    while (i < tam){
        j = i - 1;
        aux = PRESENTEs[i];
        while (j >= 0 && strcmp(PRESENTEs[j].preferencia, aux.preferencia) > 0){
            PRESENTEs[j + 1] = PRESENTEs[j];
            j--;
        }
        PRESENTEs[j + 1] = aux;
        i++;
    }
}

void ordenapresente(PRESENTE PRESENTEs[], int tam){
    int i = 1, j;
    PRESENTE aux;

    while (i < tam){
        j = i - 1;
        aux = PRESENTEs[i];
        while (j >= 0 && strcmp(PRESENTEs[j].presente, aux.presente) > 0){
            PRESENTEs[j + 1] = PRESENTEs[j];
            j--;
        }
        PRESENTEs[j + 1] = aux;
        i++;
    }
}

void ordenaTam(PRESENTE PRESENTEs[], int tam){
    int i = 1, j;
    PRESENTE aux;

    while (i < tam){
        j = i - 1;
        aux = PRESENTEs[i];
        while (j >= 0 && PRESENTEs[j].valor < aux.valor){
            PRESENTEs[j + 1] = PRESENTEs[j];
            j--;
        }
        PRESENTEs[j + 1] = aux;
        i++;
    }
}

void print_PRESENTE(PRESENTE c[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%s ", c[i].presente);
        printf("%lf\n", c[i].valor);
        //printf("%s\n", c[i].preferencia);
    }
}

int main(){
    int n;
    PRESENTE c[MAX];
    char nome[MAX];

    scanf("%[^\n]%*c", nome);
    scanf("%d%*c", &n);

    while(n){
        ler_PRESENTE(c, n);
        ordenaNome(c, n);
        ordenaTam(c,n);
        ordenapresente(c, n);

        print_PRESENTE(c, n);

        scanf("%[^\n]%*c", nome);
        scanf("%d%*c", &n);
        if(n) printf("\n");
    }
    return 0;
}
