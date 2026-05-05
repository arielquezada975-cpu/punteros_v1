
#include <stdio.h>

int main(int argc, char *argv[]) 
{
    // --- Puntero a entero ---
    int num = 15, a;
    int *x;

    x = &num; // x guarda la dirección de memoria de num
    a = *x;   // desreferenciamos x para obtener el valor de num

    printf("Direccion de num: %p | Valor: %d \n", x, a);

    // --- Puntero a char (con warning) ---
    char letra = 'a', c;
    int *ptr;

    ptr = &letra;  // ptr guarda la dirección de letra
    c = *ptr;      // desreferenciamos ptr para obtener el valor de letra
    printf("Direccion de letra: %p | Valor: %c \n", ptr, c);

    // --- Puntero a float ---
    float decimal = 3.14, dec;
    float *ptrF;

    ptrF = &decimal; // ptrF guarda la dirección de decimal
    dec = *ptrF;     // desreferenciamos ptrF para obtener el valor de decimal

    printf("Direccion de decimal: %p | Valor: %f \n", ptrF, dec);

    return 0;
}   