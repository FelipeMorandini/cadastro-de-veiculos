#ifndef VEHICLE_H
#define VEHICLE_H

#define MAX_VEHICLES 10
#define MAX_STRLEN 20

struct Vehicle {
    char brand[MAX_STRLEN];
    char model[MAX_STRLEN];
    char year[5];
    char plate[8];
};

void displayMenu();
int getMenuOption();
void registerVehicle(struct Vehicle vehicles[], int *numVehicles);
void listVehicles(const struct Vehicle vehicles[], int numVehicles);
void listVehiclesByYear(const struct Vehicle vehicles[], int numVehicles);
void listVehiclesAboveYear(const struct Vehicle vehicles[], int numVehicles);
void listVehiclesByModel(const struct Vehicle vehicles[], int numVehicles);

#endif