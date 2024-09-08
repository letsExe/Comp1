#include <stdio.h>

int main (){
    int vet[3], *p;

    p = vet;
    printf("valor anterior de p %d\n", p);
    p = p+2; //p passa a apontar para o terceiro elemento de v
    printf("valor atual de p %d\n", p);

    
    return 0;
}