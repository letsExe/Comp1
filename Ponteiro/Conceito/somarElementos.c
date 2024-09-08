#include <stdio.h>

//somar os elementos de um vetor com ponteiro

void lerVet (int v[], int *tam){ //enderço do primero elemento do vetor
    int i;

    scanf("%d", tam); //edereço de memoria para onde o tam aponta
    for (i=0; i<*tam; i++){ //*tam eh o conteudo
        scanf("%d", &v[i]);
    }
}

int somavet (int *vet, int tam){ //enderço do primero elemento do vetor
    int i, soma=0;

    for(i=0; i<tam; i++, vet++){ //vet++ eh manipulação do endereço do vetor
        soma += *vet; // para não ter vet[i]
    }

    return soma;
}

int main (){
    int vet[100], n;

    printf("Digite o tamanho do vetor\n");
    lerVet(vet, &n);
    printf("a soma eh %d\n", somavet(vet, n));

    return 0;
}