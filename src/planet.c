#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
#include "../include/planet.h"

char *planets_name[] = {
    "Lynx", "Sirius", "Larry", "Filip", "Phil",
    "Haik", "Owo", "Uwu", "Mibi", "Ara", "Ara Ara",
    "Kawai", "Fis"
};

char *planets_suffix[] = {
    "I", "II", "III", "IV", "V", "VI", "VII", "VIII",
    "IX", "X", "Magnifico", "Magnifica", "High", "Ex",
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
}