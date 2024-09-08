#include <stdio.h>
#include <string.h>
#define MAX 25

struct CadEvento {
    char nome[MAX];
    int dia[2];
    float preco;
};

int main (){
    struct CadEvento evento[MAX];
    int i, j, n, indMaior;
    float maior;

    printf("Digite a quantidade de eventos: ");
    scanf("%d%*c", &n);

    for(i=0; i<n; i++){
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

    for (i=0; i<n; i++){
        printf("EVENTO 0%d: %s\n",i+1, evento[i].nome);
        for (j=0; j<2; j++){
            printf("O dia 0%d eh %d\n", j+1, evento[i].dia[j]);
        }
        printf("O valor total do evento 0%d deu R$%.2f\n", i+1,  evento[i].preco);

        printf("\n");
    }
    
    maior = evento[0].preco;
    for (i=1; i<n; i++){
        if (evento[i].preco > maior){
            maior = evento[i].preco;
            indMaior = i;
        }
    }
     printf("O evento %s eh o mais caro, que custa: R$%.2f", evento[indMaior].nome, maior);



    return 0;
}