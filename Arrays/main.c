#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "arrays.h"

int main()
{

    int edades[3];
    char nombres [3][50];

    cargarDatos(edades, nombres);
    mostrarDatos(edades, nombres);

    return 0;
}
