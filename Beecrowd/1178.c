#include <stdio.h>
#define MAX 10

void lervet (double v[], int tam){
    int i;

    for(i=0; i<tam; i++)
        scanf("%lf", &v[i]);
}


void vetor (double v[], int tam, double n){
    int i;
    
    for (i=0; i<tam ; i++){
        v[i] = n; 
        n/=2;   
    }
}

void printvet (double vet[], int tam){
    int i;

    for (i=0; i<tam; i++){
        printf ("N[%d] = %.4lf\n", i, vet[i]);
    }
}

int main(){
    double vet[MAX];
    double n;

    scanf("%lf", &n);

    vetor(vet, MAX, n);
    printvet(vet, MAX);

    return 0;
}