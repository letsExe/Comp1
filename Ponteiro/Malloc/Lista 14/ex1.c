#include <stdio.h>
#include <stdlib.h>

float* lerNotas (float *notas, int *n){

    scanf("%d", n);

    notas = (float*) malloc (*n * sizeof(float));
    if (notas == NULL){
        printf ("Memoria insuficiente\n");
        exit (EXIT_FAILURE);
    }

    printf("Digite as %d notas: ", *n);
    for (int i=0; i<*n; i++){
        scanf("%f", &notas[i]);
    }
    return notas;
}

float CalcMedia (float *nota, int n){
    int i;
    float media, soma=0;
    
    for (i=0; i<n; i++){ 
        soma += *(nota+i); //notas[i]
    }

    media = soma/n;
    
    return media;
}

int main (){
    float *notas, media, soma=0;
    int n;

    printf("Digite quantas notas tem: ");
    notas = lerNotas(notas, &n);
    printf("%d \n", n);
    media = CalcMedia (notas, n);
    printf("a media eh %2f\n", media);

    free(notas);
    notas = NULL; //por segurança

    return 0;
}