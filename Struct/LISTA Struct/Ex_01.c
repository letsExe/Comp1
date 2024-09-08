#include <stdio.h>
#include <string.h>
#define MAX 25

struct {
    char nome[MAX];
    int dia[2];
    float preco; 
}evento;

int main (){
    struct evento;
    int i;

    printf("Digite o nome do evento: ");
    scanf("%[^\n]%*c", evento.nome);

    printf("Digite os dias do evento: ");
    for (i=0; i<2; i++){
        scanf("%d%*c", &evento.dia[i]);
    }

    printf("Digite o preco a pagar: ");
    scanf("%f", &evento.preco);

    printf("EVENTO: %s\n", evento.nome);
    for (i=0; i<2; i++){
        printf("O dia %d eh %d\n", i+1, evento.dia[i]);
    }
    printf("O valor total deu R$%.2f\n", evento.preco);



    return 0; 
}