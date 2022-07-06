#ifndef GALAXY_H
#define GALAXY_H

#include "./star_system.h"

typedef struct Galaxy {
    star_system_h **star_systems;
    int amount_of_star_systems;
} galaxy_t;

#endif
