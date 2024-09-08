#include <stdio.h>

int main (){
    int alunos, disciplinas, i, j;
    char letra;

    printf ("digite quantos alunos: ");
    scanf ("%d", &alunos);
    for (i=0; i<alunos; i++){
        printf("Digite quantas disciplinas para o aluno %d: ", i+1);
        scanf("%d", &disciplinas);
        for (j=0; j<disciplinas; j++){
            printf("Digite a disciplina %d: ", j+1);
            scanf(" %c", &letra);
        }
    }
    
    return 0;
}