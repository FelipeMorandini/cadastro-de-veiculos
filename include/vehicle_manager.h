#ifndef VEHICLE_MANAGER_H
#define VEHICLE_MANAGER_H

#include "vehicle.h"

void registerVehicle(struct Vehicle *vehicles, int *numVehicles);
void listAllVehicles(const struct Vehicle *vehicles, int numVehicles);
void listVehiclesByYear(const struct Vehicle *vehicles, int numVehicles);
void listVehiclesByMinYear(const struct Vehicle *vehicles, int numVehicles);

#endif