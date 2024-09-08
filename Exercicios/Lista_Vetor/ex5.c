#include <stdio.h>
#define MAX 10

void separaVet (float v[], int tam){
    int i, tamNeg=0, tamPos=0; 
    float vpos[MAX], vneg[MAX]; 
    
    for (i=0; i<tam; i++){
            if (v[i]<0){
                vpos[tamPos] = v[i];
                tamPos++;
            }
        else {
            vneg[tamNeg] = v[i];
            tamNeg++;
        }
    }
    for (i=0; i<tamPos; i++){
        printf("%.1f ", vpos[i]);
    }
    printf ("\n");
    for (i=0; i<tamNeg; i++){
        printf("%.1f ", vneg[i]);
    }
}
    
int main (){
    int tam=10;
    float v[]={-7.5, 8.1, 0, -49.3, 2.9, 33.5, -65.0, -21.9, 9.3, -51.7};
    separaVet (v, tam);

    return 0;
}
