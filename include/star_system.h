#ifndef STAR_SYSTEM_H
#define STAR_SYSTEM_H

#include "./planet.h"

typedef struct StarSystem {
    planet_h *star;
    planet_h **planets;
    char *name;
    int amount_of_planets;
} star_system_t;
    

star_system_t *generate_star_system(int planets_count);    

#endif
