#include <stdio.h>
#include "vehicle.h"
#include "io.h"

/**
 * Displays the main menu options for the vehicle registration system.
 * This function prints the available menu options to the console, allowing the user to select an action to perform.
 */
void displayMenu()
{
    printf("\n\nCadastro de Veículos:\n");
    printf("1 - Cadastrar veículo\n");
    printf("2 - Listar veículos\n");
    printf("3 - Listar veículos por ano de Fabricação\n");
    printf("4 - Listar veículos por ano de Fabricação com ano mínimo\n");
    printf("5 - Listar veículos por modelo\n");
    printf("0 - Sair\n");
}

/**
 * Prompts the user to enter a menu option and returns the selected option.
 *
 * This function displays a prompt to the user asking them to enter the index of
 * one of the available options, reads the user's input using `scanf`, and
 * returns the selected option.
 *
 * @return The menu option selected by the user.
 */
int getMenuOption()
{
    int option;
    printf("Digite o índice de uma das opções: ");
    scanf("%d", &option);
    return option;
}

/**
 * Prompts the user to enter the details of a vehicle and stores them in the provided `Vehicle` struct.
 *
 * @param vehicle Pointer to a `Vehicle` struct where the entered details will be stored.
 */
void getVehicleDetails(struct Vehicle *vehicle)
{
    printf("Informe a marca do veículo: ");
    scanf("%s", vehicle->brand);
    printf("Informe o modelo do veículo: ");
    scanf("%s", vehicle->model);
    printf("Informe o ano de fabricação do veículo: ");
    scanf("%s", vehicle->year);
    printf("Informe a placa do veículo: ");
    scanf("%s", vehicle->plate);
}

/**
 * Prints the details of a vehicle to the console.
 *
 * This function takes a pointer to a `Vehicle` struct and prints its brand, model, year of manufacture, and license plate to the console.
 *
 * @param vehicle Pointer to the `Vehicle` struct whose details should be printed.
 */
void printVehicleDetails(const struct Vehicle *vehicle)
{
    printf("Marca: %s\n", vehicle->brand);
    printf("Modelo: %s\n", vehicle->model);
    printf("Ano de fabricação: %s\n", vehicle->year);
    printf("Placa: %s\n", vehicle->plate);
}