#include <stdio.h>
#define TAM 5

void intersecco (int v1[], int v2[]){
    int i, j, k, aux;
    int v3[TAM];

    k=0;
    for(i=0; i<TAM; i++){
        aux = v1[i];
        for(j=0; j<TAM; j++){
            if(aux == v2[j]){
                v3[k] = aux;
                k++;
                break;
            }
        }
    }
    for (i=0; i<k; i++)
        printf("%d ", v3[i]); 
}

void uniao (int v1[], int v2[]){
    int i, j, aux, pos, flag;
    int v3[TAM*2];

    for(i=0; i<TAM; i++)
        v3[i] = v1[i];
    
    pos = i;
    for (j=0; j<TAM; j++){
        aux = v2[j];
        flag = 0;
        for(i=0; i<TAM; i++){
            if (aux == v1[i]){
                flag = 1;
            }
        }
        if (flag == 0){
            v3[pos] = aux;
            pos++;

        }
    }

    for (i=0; i<pos; i++)
        printf("%d ", v3[i]);

}

int main (){
    int v1[TAM] = {4, 10, 0, 50, 9};
    int v2[TAM] = {30, 4, 10, 5, 9};
     
    intersecco(v1, v2);
    printf("\n");
    uniao(v1, v2);

    return 0;
}