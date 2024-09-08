#include <stdio.h>

int main (){
    int v[] = {11, 12, 13, 14, 15};
    int *p; // ponteiro 

    p = v;   
    
    printf("p = %d\n", p);
    printf("&v[1] = %d\n", &v[1]);
    printf("&p[0] = %d\n", &p[0]);
    printf("p[2] = %d\n", p[2]);
    printf("p+2 = %d\n", p+2);
    printf("*(p+2) = %d\n", *(p+2));
    printf("--p = %d\n", --p);
    printf("++p = %d\n", ++p);

    return 0;
}