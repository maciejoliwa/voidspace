#ifndef PLANET_H
#define PLANET_H

#include <stdint.h>
#include <stdbool.h>
#include "mineral.h"
#include "entity.h"

<<<<<<< HEAD
typedef struct Planet {
    char *name;
=======
#define FAR_DISTANCE 700000000
#define HABITABLE_DISTANCE 150000000
#define SMALL_DISTANCE 100000000

typedef enum Climate {
    WARM,
    HOT,
    COLD,
    FREEZING,
    COOL
} climate_t;

typedef struct Planet {
    char *name;
    int distance_from_star;
>>>>>>> d2c3fc6 (added header files)
    bool has_water;
    bool has_life;
    bool has_oxygen;
    bool has_player_base;
    uint16_t diameter;
    mineral_t **available_minerals;
    entity_t **plants;
    entity_t **animals;
} planet_t;

<<<<<<< HEAD
char *generate_planet_name();

#endif
=======
// Generates planet's name from two pieces
char *generate_planet_name();
// Picks a climate based on the distance from the star and the size of the planet
climate_t decide_planet_climate(int distance_from_star);
// Creates species living on the planet
entity_t **create_species(bool plants, int number);

#endif
>>>>>>> d2c3fc6 (added header files)
