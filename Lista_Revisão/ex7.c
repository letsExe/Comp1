#include <stdio.h>
#define MAX 100
#define TAM 20

int buscaExata (char matCh[MAX][MAX], char palavra[]){
    int i, j, cont=0;

    for(i=0; i<TAM; i++){
        for(j=0; j<4; j++){
            if(palavra[i] == matCh[j][i])
                cont++;
        }
    }
    return cont;
}

int main(){
    char matCh[MAX][MAX] = {"o canto da mesa     ",
                            "todo mudo canta     ",
                            "cantigas musicais   ",
                            "na cantina escolar  "};
    char palavra[MAX];
    int repeticao;

    printf("Que palavra deseja verificar a repeticao?  ");
    scanf("%[^\n]%*c", palavra);
    repeticao = buscaExata(matCh, palavra);

    printf("A palavra %s repetiu %d vezes\n", palavra, repeticao);

    return 0;
}