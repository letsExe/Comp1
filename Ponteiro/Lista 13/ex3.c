#include <stdio.h>

//int
void maior (int *a, int *b, int *c, int *maior){
    //int maior
    if (*a > *b && *a > *c)
        *maior = *a;
    
    else 
        if (*b > *a && *b > *c)
            *maior = *b;

    else 
        *maior = *c;
    //return maior
}

int main (){
    int x, y, z, big;

    printf("dgite tres valores: ");
    scanf("%d %d %d", &x, &y, &z);

    maior (&x, &y, &z, &big);

    printf("o maior valor eh %d", big);

    return 0;
}