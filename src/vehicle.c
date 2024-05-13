#include <stdio.h>
#include <string.h>
#include "vehicle.h"

/**
 * Lists all vehicles in the given array that match the specified model.
 *
 * @param vehicles An array of Vehicle structs representing the vehicles to filter.
 * @param numVehicles The number of vehicles in the `vehicles` array.
 */
void listVehiclesByModel(const struct Vehicle vehicles[], int numVehicles)
{
    char model[MAX_STRLEN];
    printf("\nInforme o modelo para filtrar: ");
    scanf("%s", model);

    int found = 0;
    for (int i = 0; i < numVehicles; i++)
    {
        if (strcmp(vehicles[i].model, model) == 0)
        {
            printf("\nMarca: %s\n", vehicles[i].brand);
            printf("Modelo: %s\n", vehicles[i].model);
            printf("Ano de fabricação: %s\n", vehicles[i].year);
            printf("Placa: %s\n", vehicles[i].plate);
            found = 1;
        }
    }

    if (!found)
    {
        printf("Não foram encontrados veículos para o modelo informado.\n");
    }
}