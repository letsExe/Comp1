#include <stdio.h>
#define MAX 100

void lervet (int *vet, int *tam){
    int i;
    scanf("%d", tam);
    for (i=0; i<*tam; i++, vet++)
        scanf("%d", vet);
}

void min_max (int *t, int tam, int *maior, int *menor){
    int i;

    *maior = *menor = *t; //t[0]
    for(i=0; i<tam; i++){
        if(t[i] > *maior)
            *maior = t[i];
        if (t[i] < *menor)
            *menor = t[i];
    }
}

int main (){
    int minor, maiors, n;
    int vet[MAX];

    lervet (vet, &n);
    min_max (vet, n, &maiors, &minor);
    printf("maior: %d\nmenor: %d\n", maiors, minor);

    return 0;
}