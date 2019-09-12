#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "arrays.h"

void cargarDatos (int edad[], char nombre [][50])
{
    int i;

    for (i=0; i <3; i++)
    {
        printf("Ingrese una edad: ");
        scanf("%s", &edad[i]);

        printf("Ingriese un nombre: ");
        fflush(stdin);
        scanf("%s", &nombre[i]);
    }
}

void mostrarDatos (int edad[], char nombre[][50])
{
    int i;

    for (i=0; i <3; i++)
    {
        printf("\nedades: %s \n", &edad[i]);
        printf("\nnombres: %s \n", nombre[i]);
    }
}
