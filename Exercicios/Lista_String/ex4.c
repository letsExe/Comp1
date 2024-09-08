#include <stdio.h>
#include <string.h>
#define TAM 20

int main (){
    char palavra[TAM], letra;
    int i=0, j, cont, qnt[TAM];

    printf("Digite uma palavra: ");
    fgets(palavra, TAM, stdin);
    strtok(palavra, "\n");
    
    letra = palavra[i];

    while (palavra[i]!='\0'){
        if(letra != ' '){
            j = i+1;
            cont=1;
            while (palavra[j] != '\0'){
                if(palavra[j]==palavra[i]){
                    cont++;
                    palavra[j]= ' ';
                }
                j++;
            }
            qnt[i] = cont;
        }
        i++;
    }
    
    for(i=0; i<strlen(palavra); i++){
            if (palavra[i] != ' ')
                printf("%c ocorre %d vezes\n", palavra[i], qnt[i]);
        }
    return 0;
}