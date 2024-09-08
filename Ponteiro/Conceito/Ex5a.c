#include <stdio.h>

int main (){
    int num1 = 3, num2 = 5;
    int *p, *q, *r;

    
    p = &num1;
    q = &num2;

    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);
    printf("*p = %d\n", *p);
    printf("*q = %d\n", *q);

    r = p;
    p = q;
    q = r;

    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);
    printf("*p = %d\n", *p);
    printf("*q = %d\n", *q);
    

    return 0;
}