#include <stdio.h>

int main (){
   int n, i, valor, j, k, s=0;

   scanf ("%d", &n);

   for(i=0; i<n; i++){
        scanf("%d", &valor);
        for (j=k=1; j<=valor; j++, k++){
            s += k;
            k = -1;

        }
        printf ("%d\n", s);
   }
   

    return 0;
}