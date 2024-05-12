#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "vehicle.h"

/**
 * The main entry point of the program.
 * This function sets the locale to "Portuguese", initializes an array of vehicles, and enters a menu-driven loop.
 * The loop allows the user to perform various operations on the vehicles, such as registering, listing, and filtering by year and model.
 * The program exits when the user selects the "Exit" option.
 *
 * @return 0 on successful exit
 */
int main()
{
    setlocale(LC_ALL, "Portuguese");
    struct Vehicle vehicles[MAX_VEHICLES];
    int numVehicles = 0;
    int option;

    do
    {
        displayMenu();
        option = getMenuOption();

        switch (option)
        {
        case 1:
            registerVehicle(vehicles, &numVehicles);
            break;
        case 2:
            listVehicles(vehicles, numVehicles);
            break;
        case 3:
            listVehiclesByYear(vehicles, numVehicles);
            break;
        case 4:
            listVehiclesAboveYear(vehicles, numVehicles);
            break;
        case 5:
            listVehiclesByModel(vehicles, numVehicles);
            break;
        case 0:
            printf("Exiting program...\n");
            break;
        default:
            printf("Invalid option. Please try again.\n");
            break;
        }
    } while (option != 0);

    return 0;
}