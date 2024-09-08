#include <stdio.h>
#define TAM 40

float idadeDezoito (int idade[], int alunos){
    int i, cont=0;
    float porcent;

    for(i=0; i<alunos; i++){
        if(idade[i] >= 18)
        cont++;
    }
    porcent = (100*cont) / alunos;

    return porcent;
}

int main (){
    int idades[TAM];
    int i, alunos;
    float porcent;

    printf("Quantos alunos tem na turma? ");
    scanf("%d", &alunos);

    for(i=0; i<alunos; i++){
        printf("Idade do %d: ", i+1);
        scanf("%d", &idades[i]);
    }

    porcent = idadeDezoito (idades, alunos);
    
    printf("A porcentagem de alnuos maiores de 18 anos eh %.2f%%", porcent);

    return 0;
}