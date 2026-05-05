#include <stdio.h>

int main() {
   
    int num = 10;
    int a;

    int *x;

    x = &num; 

    a= *x;

    printf("Valor de num : %d\n", num);
    printf("Direccion de num  : %p\n", (void*)x);
    printf("Valor via de punteros x : %d\n", x); 
    printf("Valor de a : %d\n", a);
        return 0;

}
