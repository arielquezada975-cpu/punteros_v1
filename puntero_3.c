
#include <stdio.h>

int main(int argc, char *argv[]) 
{
    // --- Puntero a entero ---
    int num = 15, a;
    int *x;

    x = &num;
    a = *x;

    printf("Direccion de num: %p | Valor: %d \n", x, a);

    // --- Puntero a char (corregido) ---
    char letra = 'a', c;
    char *ptr;        // corregido de int* a char*

    ptr = &letra;
    c = *ptr;
    printf("Direccion de letra: %p | Valor: %c \n", ptr, c);

    // --- Puntero a float ---
    float decimal = 3.14, dec;
    float *ptrF;

    ptrF = &decimal;
    dec = *ptrF;

    printf("Direccion de decimal: %p | Valor: %f \n", ptrF, dec);

    return 0;
}