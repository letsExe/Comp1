#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcao.h"
#define MAX 20

int main (){
    CADASTRO *pets;
    int numPets, numM, numF;
    char arq[MAX], ch[MAX];

    leitura(arq, ch);
    lerdados(arq, ch);
    numPets = numLinhas(arq, ch);
    pets = alocaPets(numPets, arq, ch);

    gravaPets(pets, numPets, &numM, &numF);

    free(pets);
    contaMachoFemea(numM, numF);

    return 0;
}