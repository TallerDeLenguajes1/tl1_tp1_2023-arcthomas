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
    printf("Contenido de la variable: %d\n\n", *var);
}

void orden(int *a, int *b)
{
    int aux;
    if (*a > *b)
    {
        aux = *b;
        *b = *a;
        *a = aux;
    }
    else
    {
        aux = *a;
        *a = *b;
        *b = aux;
    }
    printf("Valores ordenados!\n\n");
}

void invertir(int *a, int *b)
{
    int aux = *b;
    *b = *a;
    *a = aux;
    printf("Valores invertidos!\n\n");
}

int main()
{
    int a = 5;
    int *pA = &a;
    printf("El cuadrado del numero: %d\n", devolverCuadrado(a));
    cuadradoVoid(a);
    mostrarContDir(pA);
    int b = 3;
    int *pB = &b;
    mostrarContDir(pB);
    // invertir(pA, pB);
    orden(pA, pB);
    mostrarContDir(pA);
    mostrarContDir(pB);
}