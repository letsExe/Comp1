#include <stdio.h>
#include <string.h>
#define TAM 30
#define QNT 20

void limpaStdin(){
    char c;/*descarta todos os caracteres atÃ© \n (incluindo o \n)*/
    while (((c = getchar()) != '\n')&&(c != EOF));
}


void imprime (char p[][TAM], int id[], int quant){
    int i;
    for (i=0; i<quant; i++){
        printf("%s - %d\n", p[i], id[i]);
    }
}

int main (){
    char pessoa[QNT][TAM];
    int idades[QNT], i=0;
    char resp;

    do{
        printf("Digite o nome da pessoa %d: ", i+1);
        scanf("%s", pessoa[i]);
        printf("Digite a idade da pessoa %d ", i+1);
        scanf("%d", &idades[i]);
        limpaStdin();
        printf("Deseja cadastrar mais (S/N): ");
        scanf("%c", &resp);
        i++;
    } while ((resp == 'S') || (resp == 's'));

    imprime (pessoa, idades, i);
        
    return 0;
}