#include <stdio.h>

int main (){
    int i, n;
    
    scanf ("%d", &n);
    
    while (n != 0){
        for (i=1; i<=n; i++){
            printf ("%d ", i);
        }
        printf("\n");
        scanf ("%d", &n);
    }
    return 0;
}