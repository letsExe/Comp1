#include <stdio.h>
#define MAX 4

void lervet (int v[], int tam){
    int i;

    for(i=0; i<tam; i++)
        scanf("%d", &v[i]);
}

void troca (int *a, int *b){
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

void vetor (int v[], int tam){
    int i, j;

    for (i=0, j=tam-1; i<j ; i++, j--){
        troca(&v[i], &v[j]);  
    }
}

void printvet (int vet[], int tam){
    int i;

    for (i=0; i<tam; i++){
        printf ("N[%d] = %d\n", i, vet[i]);
    }
}

int main(){
    int vet[MAX];

    lervet(vet, MAX);
    vetor(vet, MAX);
    printvet(vet, MAX);

    return 0;
}