#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int dia, mes, ano;
} Data;

Data*d;

int main (){
    char letra, *c;
    int num; float numm;

    printf("letra: %d bytes\n", sizeof(letra));
    printf("char*: %d bytes\n", sizeof(char*));
    printf("c: %d bytes\n", sizeof(c));

    printf("Data: %d\n", sizeof(Data));
    printf("Data*: %d\n", sizeof(Data*));
    printf("d: %d\n", sizeof(d));
    

    return 0;
}