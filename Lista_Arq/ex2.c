#include <stdio.h>
#include <stdlib.h>

int encotraLetra (char ch, FILE *f){
    int cont=0;
    char letra;

    while ((letra = fgetc(f)) != EOF){ //while ( fscanf(f,"%c", &letra) != EOF)
        if(ch == letra)
            cont++;        
    }
    
    return cont;

}

int main (){
    FILE *f;
    char letra, ch;
    int cont=0;

    f = fopen("texto.txt", "r");
    if(!f){
        printf("Arquivo nao encontrado\n");
        exit(1);
    }

    printf("Qual a letra que deseja saber se existe no arq: ");
    scanf("%c", &ch);

    cont = encotraLetra(ch, f);
    printf("A letra %c aparece %d vezes no arq\n", ch, cont);
    
    fclose(f);

    return 0;
}