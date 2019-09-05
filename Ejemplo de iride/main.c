#include <stdio.h>
#include <stdlib.h>
#include "iride.h"

#define T 6

int main()
{
    int edad[T];

    pedirArray(edad, T);

    printf("\n\nVALORES DEL ARRAY\n");
    mostrarArray(edad, T);

    damePromedio(edad, T);
    ordenar(edad, T);

    printf("\n\nARRAY ORDENADO \n");
    mostrarArray(edad, T);
}
