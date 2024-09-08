#include <stdio.h>

void lervet (int v[], int qnt){
    int i;
    for (i=0; i<qnt; i++){
        printf("Digite a idade do aluno %d ", i+1);
        scanf("%d", &v[i]);
    }
}

float contaAluno (int v[], int n){
    int i, cont=0;
    float x;
    for (i=0; i<n; i++){
        if(v[i] >= 18){
            cont++;
        }
    }
    x = (cont*100.0)/n;
    return x;
}

int main (){
    int n, v[100];

    printf("Digite quantos alunos tem: ");
    scanf("%d", &n);

    lervet(v, n);
    printf("Porcentagem eh %.2f%%\n", contaAluno(v,n));

    return 0; 
}