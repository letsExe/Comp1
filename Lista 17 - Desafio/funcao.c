#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcao.h"
#define MAX 20

void leitura(char arq[MAX], char ch[MAX]){

    printf("Digite o nome do arquivo: ");
    scanf("%s", arq);
    printf("Digite o tipo do arquivo: ");
    scanf("%s", ch);
}

FILE* lerdados (char nomeArq[], char ch[]){ 
    FILE *f;

    f = fopen(nomeArq, ch);
    if(!f){
        printf("Arquivo nao encontrado\n");
        while (!f){
            leitura(nomeArq, ch);
            f = fopen(nomeArq, ch);
        }
    } 
    
    return f;
}

int numLinhas (char arq[], char ch[]){
    FILE *f;
    int n = 0;
    char linha[MAX];  

    f = lerdados(arq, ch);

    while (fscanf(f,"%[^\n]%*c", linha) != EOF){
        n++;
    }

    fclose(f);

    return n;        
}

CADASTRO *alocaPets (int n, char arq[], char ch[]){
    FILE *f;
    CADASTRO *pets;
    int i, j, k;
    char linha[MAX];

    pets = (CADASTRO*) malloc(n*sizeof(CADASTRO));
    if(pets == NULL){
        exit(1);
    }

    f = lerdados(arq, ch);
    
    for(i=0; i<n; i++){
        fscanf(f,"%s", linha);
        (*(pets+i)).tipo = atoi(linha); //pets[i].tipo || pets+i->tipo
        (pets+i)->genero = linha[2];
        for(j=4, k=0; j<strlen(linha); j++, k++)
            pets[i].nome[k] = linha[j];

        (pets+i)->nome[k] = '\0';
    }
    fclose(f);

    return pets;
}

void gravaPets (CADASTRO *pets, int n, int *contm, int *contf){
    FILE *fm, *ff;
    int i; 
    
    (*contm) = 0;
    (*contf) = 0;

    fm = fopen("PetsMacho.txt", "w");
    ff = fopen("PetsFemeas.txt", "w");
    if (fm == NULL || ff == NULL)
        exit(1);

    for(i=0; i<n; i++){
        if ((pets+i)->genero == 'f'){
            fprintf(fm,"%d %s\n", (pets+i)->tipo, (pets+i)->nome); 
            *contm+=1;
        }
        else {
            fprintf(ff,"%d %s\n", (pets+i)->tipo, (pets+i)->nome); 
            (*contf)++;
        }
    }

    fclose(fm);
    fclose(ff);
}

void contaMachoFemea(int nm, int nf){
    FILE *fm, *ff;
    CADASTRO pet;
    int i, cm=0, cf=0, gm=0, gf=0;

    fm = fopen("PetsMacho.txt", "r");
    ff = fopen("PetsFemeas.txt", "r");
    if (fm == NULL || ff == NULL)
        exit(1);

    for(i=0; i<nm; i++){
        fscanf(fm,"%d%*[^\n]%*c", &pet.tipo);
        if (pet.tipo == 1)
            cm++;            
        else 
            gm++;
    }    
    
    for(i=0; i<nf; i++){
        fscanf(ff,"%d%*[^\n]%*c", &pet.tipo);
        if (pet.tipo == 1)
            cf++;
        else
            gf++;
    }    

    printf("Os pets que sao caes e machos: %d\nOs pets que sao gatos e machos: %d\n", cm, gm); 
    printf("pets que sao caes e femeas: %d\nOs pets que sao gatos e fameas: %d\n", cf, gf);
}
