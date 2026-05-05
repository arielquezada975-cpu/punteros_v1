#include <stdio.h>

int main(int argc, char *argv[]) 
{
    int num = 15, a;
    int *x;

    x = &num; // Asigna la dirección de num a x
    a = *x; // Asigna el valor al que apunta x a a


    printf("%p %d",x, a); // Imprime la dirección de num y su valor

    return 0;

}