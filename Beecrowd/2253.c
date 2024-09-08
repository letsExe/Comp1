#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 33

int validade(char str[]) {
    int i, tamanho;
    int maiuscula=0, minuscula=0, numero=0, caracteresEspeciais=0;
     
    tamanho = strlen(str);
    if (tamanho <= 6 || tamanho >= 32) return 0;
    
    for (i=0; i<tamanho-1; i++) {
        if (islower(str[i])) maiuscula = 1;

        else 
            if(isupper(str[i])) minuscula = 1;

        else 
            if(isdigit(str[i])) numero = 1;

        else 
            if ((str[i] >= '32' && str[i] <= '/') || (str[i] > '58' && str[i] > '40')) caracteresEspeciais = 1;
					
        else return 0;
    }
    return maiuscula * minuscula * numero * caracteresEspeciais;
}

int main() {
    char S[MAX];

    fgets(S, MAX, stdin);
    printf(validade(S) ? "Senha valida.\n" : "Senha invalida.\n");
}