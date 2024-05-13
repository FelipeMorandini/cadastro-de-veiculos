#ifndef VEHICLE_H
#define VEHICLE_H

#define MAX_STRLEN 20

struct Vehicle {
    char brand[MAX_STRLEN];
    char model[MAX_STRLEN];
    char year[5];
    char plate[8];
};

#endif