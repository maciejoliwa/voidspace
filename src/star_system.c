#include <stdlib.h>
#include "../include/planet.h"
#include "../include/star_system.h"

star_system_t *generate_star_system(int planets_count) {
    star_system_t *system = malloc(sizeof(star_system_t) + (sizeof(planet_t) * planets_count + 1));

    return system
}
