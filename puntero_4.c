
#include <stdio.h>

int main(int argc, char *argv[]) 
{
    // --- Puntero a entero ---
    int num = 15, a;
    int *x;

    x = &num;
    a = *x;

    printf("Direccion de num: %p | Valor: %d \n", x, a);

    // --- Puntero a char ---
    char letra = 'a', c;
    char *ptr;

    ptr = &letra;
    c = *ptr;
    printf("Direccion de letra: %p | Valor: %c \n", ptr, c);

    // --- Puntero a float ---
    float decimal = 3.14, dec;
    float *ptrF;

    ptrF = &decimal;
    dec = *ptrF;

    printf("Direccion de decimal: %p | Valor: %f \n", ptrF, dec);

    // --- Puntero a arreglo ---
    int arr[] = {10, 20, 30};
    int *ptrArr = arr;

    printf("Direccion arr[0]: %p | Valor: %d \n", ptrArr, *ptrArr);
    printf("Direccion arr[1]: %p | Valor: %d \n", ptrArr + 1, *(ptrArr + 1));
    printf("Direccion arr[2]: %p | Valor: %d \n", ptrArr + 2, *(ptrArr + 2));

    return 0;
}