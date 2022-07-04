#include <stdint.h>
#include <stdbool.h>
#include "mineral.h"
#include "entity.h"

const char *planets_name[] = {
    "Lynx", "Sirius", "Larry", "Filip", "Phil",
    "Haik", "Owo", "Uwu", "Mibi", "Ara", "Ara Ara",
    "Kawai", "Fis"
};

const char *planets_suffix[] = {
    "I", "II", "III", "IV", "V", "VI", "VII", "VIII",
    "IX", "X", "Magnifico", "Magnifica", "High", "Ex",
    "P", "V", "Weed", "THC"
};

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
