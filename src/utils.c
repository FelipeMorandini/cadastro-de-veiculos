#include <string.h>
#include <ctype.h>
#include "utils.h"

/**
 * Checks if the given license plate string is valid.
 *
 * A valid license plate must have the following format:
 * - 3 alphabetic characters
 * - A hyphen (-) character
 * - 4 numeric characters
 *
 * @param plate The license plate string to validate.
 * @return 1 if the license plate is valid, 0 otherwise.
 */
int isValidPlate(const char *plate)
{
    int len = strlen(plate);

    if (len != 8 || plate[3] != '-')
        return 0;

    for (int i = 0; i < 3; i++)
    {
        if (!isalpha(plate[i]))
            return 0;
    }

    for (int i = 4; i < 8; i++)
    {
        if (!isdigit(plate[i]))
            return 0;
    }

    return 1;
}

/**
 * Checks if the given year string is a valid 4-digit year.
 *
 * @param year The year string to validate.
 * @return 1 if the year is valid, 0 otherwise.
 */
int isValidYear(const char *year)
{
    int len = strlen(year);

    if (len != 4)
        return 0;

    for (int i = 0; i < len; i++)
    {
        if (!isdigit(year[i]))
            return 0;
    }

    return 1;
}