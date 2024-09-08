#include <stdio.h>
#include <math.h>

void lerVet (int va[], int tam){
    int i;
    for (i=0; i<tam; i++)
        scanf("%d", &va[i]);
}

int produtoEscalar (int va[], int vb[], int tam){
    int i, prodEsca, soma=0;
    for (i=0; i<tam; i++){
        prodEsca = va[i]*vb[i];
        soma+=prodEsca;
    }
    return soma; 
}

void somaVetores (int va[], int vb[], int vx[], int tam){
    int i, soma=0;
    for (i=0; i<tam; i++){
        vx[i] = va[i]+vb[i];
    }
    
}

int main() {
    
    int i, tam=5, v1[tam], v2[tam], v3[tam];
    printf("Digite valores para o vetor 1: ");
    lerVet (v1, tam);
    
    printf("Digite valores para o vetor 2: ");
    lerVet (v2, tam);
    
    printf("O produto escalar eh %d\n", produtoEscalar(v1, v2, tam));
    
    somaVetores(v1, v2, v3, tam);
    printf("A raiz quadrada do v[3] é: ");
    for (i=0; i<tam; i++){
        printf ("%.2f ", sqrt(v3[i]));
    }
    
    return 0;
}