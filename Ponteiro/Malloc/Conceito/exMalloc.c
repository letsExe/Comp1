#include <stdio.h>
#include <stdlib.h>

int main (){
    float *notas; //notas[?]
    int n;

    printf("Digite a quantidade de notas que vc deseja quarda\n");
    scanf("%d", &n);

    //float notas[n]; não pode

    notas = (float*) malloc(n * sizeof(float));
    if (notas == NULL){
        printf("Memoria insuficiente\n");
        exit (EXIT_FAILURE);
    }

    printf("Digite as %d notas: ");
    for (int i=0; i<n; i++)
        scanf("%f", &notas[i]);

    for (int i=0; i<n; i++)
        printf("%.2f ", *(notas+i)); //notas[i]

    free(notas);
    notas = NULL; //por segurança
    
    return 0;
}