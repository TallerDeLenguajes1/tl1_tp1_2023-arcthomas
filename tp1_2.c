// Librerias

#include <stdio.h>
#include <stdlib.h>

// Funciones

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
    printf("Valores iniciales A: %d B: %d\n",*a,*b);
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
    printf("Valores ordenados! A: %d B: %d\n\n", *a, *b);
}

void invertir(int *a, int *b)
{
    printf("Valores iniciales A: %d B: %d\n",*a,*b);
    int aux = *b;
    *b = *a;
    *a = aux;
    printf("Valores invertidos! A: %d B: %d\n\n",*a,*b);
}

// Main

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