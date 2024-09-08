#include <stdio.h>

void verifica (int v[], int num){
    int i, j, flag, v2[10];

    for(i=0, j=0; j<10; i++, j++){
        if(v[i] == num){
            i = i + 1;
            flag = 1;
        }
         v2[j] = v[i];
    }

    if (flag == 1)
        v2[9] = 0;

    for(i=0; i<10; i++){
        printf("%d ", v2[i]);
    }
    
}

int main(){
    int v[] = {70, 2, 34, 10, 81, 5, 43, 11, 7, 20};
    int i, num;

    printf("Digite o numero que vc quer saber se esta no vetor: ");
    scanf("%d", &num);
    verifica (v, num);

    return 0;
}