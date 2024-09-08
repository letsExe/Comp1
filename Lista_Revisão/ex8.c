#include <stdio.h>
#define MAX 20
#define QUANT 10

typedef struct {
    char nome[MAX];
    int disc[QUANT]; //codigo da disciplina
    int quant; // quantas disciplinas tem
    float notas[QUANT];
}ALUNO;

void calcMedia (ALUNO al[], int tamAlunos, int vetorDisc[], int tamDisc){
    int i, j, k, soma=0, cont=0;
    float media;
    for(i=0; i<tamDisc; i++){
        soma=0;
        cont=0;
        for(j=0; j<tamAlunos; j++){
            for(k=0; k<al->quant; k++){
                if(al->disc[k] == vetorDisc[i]){
                    soma += al->notas[k];
                    cont++; 
                }
            }
        }
        media = soma/cont;
        printf("A média eh: %.2f\n", media);
    }  
}

int verificaDisciplina (int vet[], int tam, int valor){
    int i;
    for(i=0; i<tam; i++){
        if (vet[i] == valor){
            return 1;
        }
    }
    return 0;
}

int main (){
    ALUNO alunos [50];
    int i=0, j, k, opcao, cont=0;
    int discExis[QUANT];
    char resp;

    do{
        printf("Digite o nome do aludo: ");
        scanf("%[^\n]%*c", alunos[i].nome);

        printf("Qunatas disciplinas ele está cursndo? ");
        scanf("%d%*c", &alunos[i].quant);

        for(j=0; j<alunos[i].quant; j++){
            printf("Digite o codigo da disciplina: ");
            scanf("%d%*c", &alunos[i].disc[j]);

            printf("Digite a nota da disciplina: ");
            scanf("%f%*c", &alunos[i].notas[j]);

            if (verificaDisciplina(discExis, cont, alunos[i].disc[j]) == 0){
                discExis[cont] = alunos[i].disc[j];
                cont++;
            }
        }

        printf("Deseja cadatrar mais alunos (S/N): ");
        scanf("%c%*c", &resp);
        i++;
    } while (resp == 'S' || resp == 's');

    do{
        printf("1 - Calcular a média dos alunos, por disciplina\n");
        printf("2 - Mostrar nome do aluno com a maior nota, por disciplina\n");
        printf("3 - Sair\n");
        scanf("%d", &opcao);

        switch (opcao){

        case 1 :
            calcMedia(alunos, i, discExis, cont);
            break;
        
        case 2 :
            //maiorNota(alunos);
            break;

        case 3 :
            printf("Tchau!");
            break;
        
        default:
            printf("Opção invalida, escolha novamente: ");
            scanf("%d", &opcao);
            break;
        }
    }while(opcao != 3);

    return 0;
}

