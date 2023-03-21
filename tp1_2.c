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

int main()
{
    int a = 4;
    printf("El cuadrado del numero: %d\n", devolverCuadrado(a));
    cuadradoVoid(a);
}