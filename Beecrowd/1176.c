#include <stdio.h>

void Fibo (double fibo){
    int i;
    double soma=0, anterior=0, prox=1;

    if (fibo == 0){
        printf("Fib(0) = 0\n");
    }
    else
        if (fibo == 1){
            printf("Fib(1) = 1\n");
        }

    else{
        for(i=0; i<fibo-1; i++){
            soma = anterior + prox;
            anterior = prox;
            prox = soma;
        }
        printf("Fib(%.0lf) = %.0lf\n", fibo, soma); 
    }
}

int main(){
    double fibo;
    int n, i;

    scanf ("%d", &n);

    for(i=0; i<n; i++){
        scanf("%lf", &fibo);
        Fibo(fibo);
    }

    return 0;
}