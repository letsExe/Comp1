#include <stdio.h>

void lervet (int v[], int tam){
    int i;

    for(i=0; i<tam; i++)
        scanf("%d", &v[i]);
}

void vetor (int v[], int tam, int n){
    int i;

    for (i=0; i<tam; i++){
        v[i] = n;
        n*=2;
    }
}

void printvet (int vet[], int tam){
    int i;

    for (i=0; i<tam; i++){
        printf ("N[%d] = %d\n", i, vet[i]);
    }
}

int main (){
    int vet[10];
    int n;

    scanf("%d", &n);
    vetor(vet,10,n);
    printvet(vet, 10);

    return 0;

}