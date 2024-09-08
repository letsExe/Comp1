#include <stdio.h>

void lervet (int v[], int tam){
    int i;

    for(i=0; i<tam; i++)
        scanf("%d", &v[i]);
}

void vetor (int v[], int tam){
    int i;

    for (i=0; i<tam; i++){
        if (v[i]<=0){
            v[i] = 1;
        }
    }
    for (i=0; i<tam; i++)
        printf ("X[%d] = %d\n", i, v[i]);
}

int main (){
    int vet[10];

    lervet(vet,10);
    vetor(vet,10);

    return 0;

}