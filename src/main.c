#include <stdio.h>
#include <stdlib.h>
#include "vehicle.h"
#include "io.h"
#include "vehicle_manager.h"

#define MAX_VEHICLES 100

/**
 * The main entry point of the program. Displays a menu of options for managing vehicles,
 * and allows the user to perform various operations such as registering new vehicles,
 * listing all vehicles, listing vehicles by year, listing vehicles by minimum year, and
 * listing vehicles by model. The program runs in an infinite loop until the user chooses
 * to exit.
 */
int main()
{
    struct Vehicle vehicles[MAX_VEHICLES];
    int numVehicles = 0;
    int option;

    while (1)
    {
        displayMenu();
        option = getMenuOption();

        switch (option)
        {
        case 1:
            registerVehicle(vehicles, &numVehicles);
            break;
        case 2:
            listAllVehicles(vehicles, numVehicles);
            break;
        case 3:
            listVehiclesByYear(vehicles, numVehicles);
            break;
        case 4:
            listVehiclesByMinYear(vehicles, numVehicles);
            break;
        case 5:
            listVehiclesByModel(vehicles, numVehicles);
            break;
        case 0:
            exit(0);
        default:
            printf("Opção inválida\n");
        }
    }

    return 0;
}