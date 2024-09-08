#include <stdio.h>
#include <string.h>
#define MAX 25

struct CadEvento {
    char nome[MAX];
    int dia[2];
    float preco;
};

int main (){
    struct CadEvento evento[2];
    int i, j;

    for(i=0; i<2; i++){
        printf("Digite o nome do evento %d: ", i+1);
        scanf("%[^\n]%*c", evento[i].nome);

        printf("Digite o dia 0%d do evento: ", i+1);
        for (j=0; j<2; j++){
            scanf("%d%*c", &evento[i].dia[j]);
        }

        printf("Digite o preco a pagar: ");
        scanf("%f%*c", &evento[i].preco);
    }

    printf("\n");

    for (i=0; i<2; i++){
        printf("EVENTO 0%d: %s\n",i+1, evento[i].nome);
        for (j=0; j<2; j++){
            printf("O dia 0%d eh %d\n", j+1, evento[i].dia[j]);
        }
        printf("O valor total do evento 0%d deu R$%.2f\n", i+1,  evento[i].preco);

        printf("\n");
    }

    return 0;
}