#include <stdio.h>

int main(int argc, char *argv[]) 
{
    int num = 15, a;
    int *x;

    x = &num; // Asigna la dirección de num a x
    a = *x; // Asigna el valor al que apunta x a a


    printf("%p %d \n",x, a); // Imprime la dirección de num y su valor
    

    char letra = 'a', c;
    int *ptr;

    ptr = &letra;               // Asigna la dirección de letra a ptr 
    c = *ptr; // Asigna el valor al que apunta ptr a C
    printf("%p %c \n",ptr, c); // Imprime la dirección de letra y su valor

    float decimal = 3.14, dec;
    float *ptrF;

    return 0;



}
