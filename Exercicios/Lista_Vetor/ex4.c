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
    for (i=tam; i>pos; i--){
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
    int n, i;

    printf ("Digite um valor para inserir no vetor: ");
    scanf ("%d", &n);
    
    for (i=0; i<9; i++){
        if (n == vet[i]){
            imprimeVet(vet, 9);
            break;
        }
        else {
            inserirNum(vet, 9, n);
            imprimeVet(vet, 10);
            break;
        }
    }

    return 0;
}