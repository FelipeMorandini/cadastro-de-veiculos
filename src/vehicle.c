#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "vehicle.h"

/**
 * Displays the main menu options for the vehicle registration system.
 * This function prints the available menu options to the console, allowing the user to select an action to perform.
 */
void displayMenu()
{
    printf("\n\nCadastro de Veículos: \n");
    printf("Digite o índice de uma das opções abaixo: \n");
    printf("1 - Cadastrar veículo\n");
    printf("2 - Listar veículos \n");
    printf("3 - Listar veículos por ano de Fabricação. \n");
    printf("4 - Listar veículos por ano de Fabricação com ano mínimo.\n");
    printf("5 - Listar veículos por modelo. \n");
    printf("0 - Sair \n");
}

/**
 * Prompts the user to enter a menu option and returns the selected option.
 *
 * This function displays a prompt for the user to enter a menu option, reads the
 * user's input, and returns the selected option as an integer.
 *
 * @return The menu option selected by the user.
 */
int getMenuOption()
{
    int option;
    printf("Opção: ");
    scanf("%d", &option);
    return option;
}

/**
 * Registers a new vehicle in the vehicles array.
 *
 * @param vehicles Pointer to the array of vehicles.
 * @param numVehicles Pointer to the number of vehicles in the array.
 */
void registerVehicle(struct Vehicle vehicles[], int *numVehicles)
{
    if (*numVehicles >= MAX_VEHICLES)
    {
        printf("Erro: Limite máximo de veículos atingido.\n");
        return;
    }

    struct Vehicle newVehicle;

    printf("\nInforme a marca do veículo: ");
    scanf("%s", newVehicle.brand);

    printf("Informe o modelo do veículo: ");
    scanf("%s", newVehicle.model);

    printf("Informe o ano de fabricação do veículo: ");
    scanf("%s", newVehicle.year);

    printf("Informe a placa do veículo: ");
    scanf("%s", newVehicle.plate);

    vehicles[*numVehicles] = newVehicle;
    (*numVehicles)++;
}

/**
 * Prints a list of all registered vehicles.
 *
 * This function iterates through the provided array of vehicles and prints the
 * brand, model, year, and license plate for each vehicle.
 *
 * @param vehicles An array of Vehicle structs representing the registered vehicles.
 * @param numVehicles The number of vehicles in the vehicles array.
 */
void listVehicles(const struct Vehicle vehicles[], int numVehicles)
{
    if (numVehicles == 0)
    {
        printf("Não há veículos cadastrados.\n");
        return;
    }

    printf("\nVeículos cadastrados:\n");
    for (int i = 0; i < numVehicles; i++)
    {
        printf("\nMarca: %s\n", vehicles[i].brand);
        printf("Modelo: %s\n", vehicles[i].model);
        printf("Ano de fabricação: %s\n", vehicles[i].year);
        printf("Placa: %s\n", vehicles[i].plate);
    }
}

/**
 * Prints a list of vehicles that have a manufacturing year greater than the specified year.
 *
 * @param vehicles An array of Vehicle structs representing the vehicles to filter.
 * @param numVehicles The number of vehicles in the vehicles array.
 */
void listVehiclesByYear(const struct Vehicle vehicles[], int numVehicles);
void listVehiclesByYear(const struct Vehicle vehicles[], int numVehicles)
{
    char year[5];
    printf("\nInforme o ano de fabricação desejado: ");
    scanf("%s", year);

    int found = 0;
    for (int i = 0; i < numVehicles; i++)
    {
        if (strcmp(vehicles[i].year, year) == 0)
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
        printf("Não foram encontrados veículos para o ano informado.\n");
    }
}

/**
 * Prints information about vehicles that were manufactured after a given year.
 *
 * @param vehicles An array of Vehicle structs representing the vehicles to filter.
 * @param numVehicles The number of vehicles in the vehicles array.
 */
void listVehiclesAboveYear(const struct Vehicle vehicles[], int numVehicles)
{
    char year[5];
    printf("\nInforme o ano de fabricação limite para o filtro: ");
    scanf("%s", year);

    int found = 0;
    for (int i = 0; i < numVehicles; i++)
    {
        if (atoi(vehicles[i].year) > atoi(year))
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
        printf("Não foram encontrados veículos acima do ano informado.\n");
    }
}

/**
 * Prints information about vehicles that match a given model.
 *
 * @param vehicles An array of Vehicle structs representing the vehicles to filter.
 * @param numVehicles The number of vehicles in the vehicles array.
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