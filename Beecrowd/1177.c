#include <stdio.h>
#define MAX 10

void lervet (int v[], int tam){
    int i;

    for(i=0; i<tam; i++)
        scanf("%d", &v[i]);
}


void vetor (int v[], int tam, int n){
    int i, aux;
    
    for (i=aux=0; i<tam ; i++){
        v[i] = aux; 
        aux++;
        if (aux == n){
            aux = 0;
        }   
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
    int n;

    scanf("%d", &n);

    vetor(vet, MAX, n);
    printvet(vet, MAX);

    return 0;
}