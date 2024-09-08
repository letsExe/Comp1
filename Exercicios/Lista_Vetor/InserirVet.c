#include <stdio.h>

int acha_pos (int va[], int tam, int n){
    int i;
    for (i=0; i<tam; i++){
        if (va[i]>n)
            return i;
    }
    return i;
}

void inserir (int va[], int tam, int n){
    int i, pos;
    pos = acha_pos (va, tam, n);
    for (i=tam; tam>pos; i--){
        va[i] = va[i-1];
    }
    va[pos] = n;
}

void imprimeVet(int vet[], int tam){
    int i;
    for(i = 0; i < tam; i++){
        printf("%d ", vet[i]);
    }
}

int main (){
    int vet[] = {5,10,18,24,39,43,55,69,78};
    //FAÇA O INSEREVET
    inserir(vet, 9, 12);
    imprimeVet(vet, 10);
    return 0;
}