#include <stdio.h>
#include <stdlib.h>

int devolverCuadrado(int num)
{
    return (num * num);
}

int main()
{
    int a = 3;
    printf("El cuadrado del numero: %d", devolverCuadrado(a));
}