#include <stdio.h>
#include <string.h>
#define TAM 30

void tiraChar (char palavra[], char letra){
    size_t i, j;
    char final[TAM];

    for (i=j=0; i < strlen(palavra); ){
        if (palavra[i]!=letra){
            final[j]=palavra[i];
            i++;
            j++;
        }
        else {
            i++;
        }
    }
     printf("%s", final);
}

int main (){
    char palavra[TAM], letra;
    printf("Digite uma palavra: ");
    fgets(palavra, TAM, stdin);
    strtok (palavra, "\n");
    printf ("Digite uma letra: ");
    scanf("%c", &letra);

    tiraChar (palavra, letra);

    return 0;
}