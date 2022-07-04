#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "../include/planet.h"

char *generate_planet_name() {
    srand(time(NULL));

    int length_names = (sizeof(planets_name) / sizeof(char *));
    int length_suffixes = (sizeof(planets_suffix) / sizeof(char *));

    int name_index = rand() % length_names;
    int suffix_index = rand() % length_suffixes;

    char *buffer = malloc(100);

    sprintf("%s %s", planets_name[name_index], planets_suffix[suffix_index]);
    return buffer;
}