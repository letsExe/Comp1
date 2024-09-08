#include <stdio.h>
#include <string.h>
#define MAX 100

void palindromo(char palabra[MAX]){
    int i, j, tamanho, flag=1;

    tamanho = strlen(palabra);

        for (i=0, j=tamanho-1; i<j; i++, j--)
            if (palabra[i] != palabra[j]){
                flag = 0;
                break;
            }
        if (flag == 1)
            printf("Eh palindromo\n");
        else
            printf("Nao eh palindromo\n");
}

int main (){
    char palavra[MAX];

    scanf("%s", palavra);
    palindromo(palavra);

    return 0;
}