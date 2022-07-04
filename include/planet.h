#ifndef PLANET_H
#define PLANET_H

#include <stdint.h>
#include <stdbool.h>
#include "mineral.h"
#include "entity.h"

typedef struct Planet {
    char *name;
    bool has_water;
    bool has_life;
    bool has_oxygen;
    bool has_player_base;
    uint16_t diameter;
    mineral_t **available_minerals;
    entity_t **plants;
    entity_t **animals;
} planet_t;

char *generate_planet_name();

#endif