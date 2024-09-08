#include <stdio.h>
#include <string.h>
#define MAX 25

struct CadAluno {
    char nome[MAX];
    char sexo;
    int matricula;
    float notas[MAX];
}aluno;

struct CadProf{
    char nome[MAX];
    int turmas[MAX];
};

int main (){
    struct CadAluno aluno;
    int i;
    //aluno = ??? // ERROR

    printf("Digite o nome do aluno: ");
    scanf("%[^\n]%*c", aluno.nome);

    printf("Digite o sexo do aluno(F/M):");
    scanf("%c", &aluno.sexo);

    printf("Digite a matriculado aluno: ");
    scanf("%*c%d", &aluno.matricula);

    printf("Digite as 4 notas do aluno:");
    for (i=0; i<4; i++){
        scanf("%f", &aluno.notas[i]);
    }


    printf("%s\n", aluno.nome);
    printf("%c\n", aluno.sexo);
    printf("%d\n", aluno.matricula);
    for (i=0; i<4; i++){
        printf("%.2f\n", aluno.notas[i]);
    }

    return 0;
}