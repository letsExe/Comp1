#include <stdio.h>

int main (){
    int num = 10;
    int *p; // ponteiro 

    //p = 10; // manipula o endereço 10
    p = &num; // p recebe o enreço de num

    printf("num = %d\n", num);
    printf("&num = %d\n", &num); //p == &num
    printf("p = %d\n", p);
    printf("*p = %d\n", *p);

    *p = *p + 1; // (*p)++
    printf("*p = p+1: %d\n", *p);
    printf("num = %d\n", num);


    p = p + 1; //p++, manipula o endereço de p
    printf("p = p + 1: %d\n", p);

   

    return 0;
}