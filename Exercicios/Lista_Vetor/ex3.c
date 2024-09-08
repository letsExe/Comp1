#include <stdio.h>

void lerVet (int va[], int tam){
    int i;
    for (i=0; i<tam; i++)
        scanf("%d", &va[i]);
}
int cpyIntercalado (int va[], int vb[], int vx[], int tam){
    int i, j = i*2;
    for (i=0; i<tam; i++){
        vx[i*2] = va[i];
        vx[i*2 + 1] = vb[i];
    }
}


int main(){
    
    int i, v1[5], v2[5], v3[10],tam=5, tamV3=10;
    printf("Digite valores para o vetor 1: ");
    lerVet (v1, tam);
    
    printf("Digite valores para o vetor 2: ");
    lerVet (v2, tam);

    cpyIntercalado (v1, v2, v3, tam);
    for (i=0; i<tamV3; i++){
        printf("%d ", v3[i]);
    }
    return 0;
}