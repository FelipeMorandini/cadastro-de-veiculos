#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "vehicle.h"
#include "io.h"
#include "vehicle_manager.h"
#include "utils.h"

/**
 * Registers a new vehicle in the system.
 *
 * @param vehicles Pointer to an array of Vehicle structs to store the registered vehicles.
 * @param numVehicles Pointer to an integer storing the current number of vehicles.
 *
 * This function prompts the user to enter the details of a new vehicle, validates the
 * plate and year, and adds the new vehicle to the vehicles array. The numVehicles
 * pointer is incremented to reflect the new vehicle.
 */
void registerVehicle(struct Vehicle *vehicles, int *numVehicles)
{
    struct Vehicle newVehicle;
    getVehicleDetails(&newVehicle);

    if (!isValidPlate(newVehicle.plate))
    {
        printf("Placa inválida. Por favor, insira uma placa no formato XXX-YYYY.\n");
        return;
    }

    if (!isValidYear(newVehicle.year))
    {
        printf("Ano inválido. Por favor, insira um ano com 4 dígitos.\n");
        return;
    }

    vehicles[*numVehicles] = newVehicle;
    (*numVehicles)++;
}

/**
 * Prints details of all vehicles in the given array.
 *
 * @param vehicles An array of Vehicle structs representing the vehicles to print.
 * @param numVehicles The number of vehicles in the array.
 */
void listAllVehicles(const struct Vehicle *vehicles, int numVehicles)
{
    for (int i = 0; i < numVehicles; i++)
    {
        printVehicleDetails(&vehicles[i]);
    }
}

/**
 * Prints details of vehicles that were manufactured in the specified year.
 *
 * @param vehicles An array of Vehicle structs representing the vehicles to filter.
 * @param numVehicles The number of vehicles in the vehicles array.
 */
void listVehiclesByYear(const struct Vehicle *vehicles, int numVehicles)
{
    char year[5];
    printf("\nInforme o ano de fabricação desejado: ");
    scanf("%s", year);

    int found = 0;
    for (int i = 0; i < numVehicles; i++)
    {
        if (strcmp(vehicles[i].year, year) == 0)
        {
            printVehicleDetails(&vehicles[i]);
            found = 1;
        }
    }

    if (!found)
    {
        printf("Não foram encontrados veículos para o ano informado.\n");
    }
}

/**
 * Prints details of vehicles that were manufactured in or after the specified year.
 *
 * @param vehicles An array of Vehicle structs representing the vehicles to filter.
 * @param numVehicles The number of vehicles in the vehicles array.
 */
void listVehiclesByMinYear(const struct Vehicle *vehicles, int numVehicles)
{
    char minYear[5];
    printf("\nInforme o ano de fabricação limite para o filtro: ");
    scanf("%s", minYear);

    int found = 0;
    for (int i = 0; i < numVehicles; i++)
    {
        if (atoi(vehicles[i].year) > atoi(minYear))
        {
            printVehicleDetails(&vehicles[i]);
            found = 1;
        }
    }

    if (!found)
    {
        printf("Não foram encontrados veículos fabricados após o ano informado.\n");
    }
}