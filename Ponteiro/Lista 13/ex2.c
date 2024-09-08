#include <stdio.h>

void calcula (float r, float *p, float *a){
    *p = 2 * 3.14 * r;
    *a = 3.14 * r * r;
}

int main (){
    float r, p, a;
    scanf("%f", &r);
    calcula(r, &p, &a);
    printf ("raio eh %.2f, perimetro eh %.2f, area eh %.2f", r, p, a);

    return 0;
}