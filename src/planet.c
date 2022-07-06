#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
#include "../include/planet.h"

char *planets_name[] = {
    "Lynx", "Sirius", "Larry", "Filip", "Phil",
    "Haik", "Owo", "Uwu", "Mibi", "Ara", "Ara Ara",
    "Kawai", "Fis", "Bulgy"
};

char *planets_suffix[] = {
    "I", "II", "III", "IV", "V", "VI", "VII", "VIII",
    "IX", "X", "Magnifico", "Wulgy", "Magnifica", "High", "Ex",
    "P", "V", "Weed", "THC"
};

char *generate_planet_name() {
    srand(time(NULL));

    int length_names = (sizeof(planets_name) / sizeof(planets_name[0]));
    int length_suffixes = (sizeof(planets_suffix) / sizeof(planets_suffix[0]));

    int name_index = rand() % length_names;
    int suffix_index = rand() % length_suffixes;

    char *buffer = malloc(sizeof(char) * 255);

    strcat(buffer, planets_name[name_index]);
    strcat(buffer, " ");
    strcat(buffer, planets_suffix[suffix_index]);
    return buffer;
<<<<<<< HEAD
}
=======
}

climate_t decide_planet_climate(int distance_from_star) {
    if (distance_from_star > FAR_DISTANCE) {
        return FREEZING;
    }
    else if (distance_from_star < FAR_DISTANCE && distance_from_star > HABITABLE_DISTANCE) {
        return COLD;
    }
    else if (distance_from_star <= HABITABLE_DISTANCE && distance_from_star > SMALL_DISTANCE) {
        return COOL;
    }
    else if (distance_from_star <= SMALL_DISTANE && distance_from_start >= 50000000) {
        return WARM;
    }

    return HOT;
}
>>>>>>> d2c3fc6 (added header files)
