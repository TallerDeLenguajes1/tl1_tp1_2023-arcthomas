#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hola mundo!");
    int a = 2;
    int *pA = &a;
    printf("\nContenido del puntero: %d", *pA);
    printf("\nDirección de memoria almacenada por el puntero: %d", pA);
    printf("\nDirección de memoria de la variable: %d", &a);
    printf("\nDirección de memoria del puntero: %d", &pA);
    printf("\nTamaño de memoria utilizado por la variable (sizeof): %d", sizeof(a));
}
