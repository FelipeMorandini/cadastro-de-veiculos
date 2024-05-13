#ifndef IO_H
#define IO_H

#include "vehicle.h"

void displayMenu();
int getMenuOption();
void getVehicleDetails(struct Vehicle *vehicle);
void printVehicleDetails(const struct Vehicle *vehicle);

#endif