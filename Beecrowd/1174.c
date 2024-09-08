#include <stdio.h>
#define MAX 10

void lervet (float v[], int tam){
    int i;

    for(i=0; i<tam; i++)
        scanf("%f", &v[i]);
}

void vetor (float v[], int tam){
    int i;

    for (i=0; i<tam; i++){
        if(v[i] <= 10.0){
            printf ("A[%d] = %.1f\n", i, v[i]);
        }
    }
}

int main(){
    float vet[MAX];

    lervet(vet, MAX);
    vetor(vet, MAX);

    return 0;
}