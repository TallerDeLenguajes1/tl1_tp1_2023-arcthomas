#include <stdio.h>
#include <stdlib.h>

int devolverCuadrado(int num)
{
    return (num * num);
}

void cuadradoVoid(int num)
{
    printf("El cuadrado del numero: %d\n", num * num);
}

void mostrarContDir(int *var)
{
    printf("Dirección de memoria de la variable: %d\n", var);
    printf("Contenido de la variable: %d\n", *var);
}

int main()
{
    int a = 5;
    int *pA = &a;
    printf("El cuadrado del numero: %d\n", devolverCuadrado(a));
    cuadradoVoid(a);
    mostrarContDir(pA);
}