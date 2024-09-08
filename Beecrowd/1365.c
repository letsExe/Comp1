#include <stdio.h>
#define MAX 100

void lervet (int vet[], int n){
    int i;

     for (i=0; i<n; i++){
        scanf("%d", &vet[i]);
    }
}

void printVet (int vet[], int tam){
    int i;

    for (i=0; i<tam; i++){
        printf("%d ", vet[i]);
    }
}

int procura (int vet[], int tam, int n){
    int i;

    for(i=0; i<tam; i++)
        if (n == vet[i]) return 1;

    return 0;
}

void exclui_repetido (int origem[], int tam, int new[], int *newTam){
    int i, j;

    new[0] = origem[0];
    for (i=j=1; i<tam; i++){
        if (!procura(new, j, origem[i])){
            new[j] = origem[i];
            j++;
        }
    } 
    *newTam = j;
}

int main (){
    int n1, n2;
    int v1[MAX], v2[MAX];

    scanf("%d", &n1);
    lervet(v1, n1);
    exclui_repetido(v1, n1, v2, &n2);
    printVet(v2, n2);

    return 0; 
}