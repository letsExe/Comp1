#include <stdio.h>

void lervet (int v[], int tam){
    int i;
    for (i=0; i<tam; i++){
        scanf("%d", &v[i]);
    }
}

void achamenorpos (int v[], int tam){
    int i, menor, pos=0;
    menor = v[0];
    for (i=1; i<tam; i++){
        if (v[i]<menor){
            menor = v[i];
            pos = i;
        }
    }
    printf ("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", pos);

}

int main (){
    int i, tam;
    
    scanf ("%d", &tam);
    int v[tam];

    lervet (v, tam);
    achamenorpos (v, tam);    

    return 0;
}