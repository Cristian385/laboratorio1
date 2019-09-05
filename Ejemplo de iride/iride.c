#include <stdio.h>
#include <stdlib.h>

#include "iride.h"

void pedirArray(int edad[], int tam)
{
    int i;
    int maximo= 0;
    int contadorEdades = 0;
    int acumuladorEdades = 0;
    float promedio;

    for (i = 0; i < tam; i++)
    {

        printf("Ingrese una edad: ");
        scanf("%d", &edad[i]);
        contadorEdades++;

        if (edad[i] > maximo)
        {
            maximo = edad[i];
            promedio= acumuladorEdades/contadorEdades;
        }
    }
    printf("La edad maxima es: %d \n", maximo);
    printf("Promedio: %f", promedio);
}


void mostrarArray(int edad[], int tam)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        printf("%d\n", edad[i]);
    }
}


void damePromedio(int edad[], int tam)
{
    int i;
    float promedio;

    printf("\nPromedio: %f", promedio);

}


void ordenar(int edad[], int tam)
{
    int i;
    int j;
    int aux;

    for (i = 0; i < tam; i++)
    {
        for (j = 0; j < tam-1; j++)
        {
            if (edad[i] < edad[j])
            {
                aux= edad[i];
                edad[i]= edad[j];
                edad[j]= aux;
            }
        }
    }
}
