#include <stdio.h>

void lerverpos (int vet[], int tam){
    int i;
    for (i=0; i<tam; i++){
        scanf ("%d", &vet[i]);
        if (vet[i] < 0)
            scanf ("%d", &vet[i]);
    }
}

void getmaior (int vet[], int tam){
    int i, maior=0, pos=0;
    for (i=0; i<tam; i++){
        if (vet[i]> maior){
            maior = vet[i];
            pos = i;
        }
    }
    printf ("O maior elemento eh %d e a posicao eh %d", maior, i);
}

int main (){
    int v[5], tam=5;

    lerverpos(v, tam);
    getmaior(v, tam);

    return 0; 
}