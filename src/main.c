#include <stdio.h>
#include <stdlib.h>
#include "../include/planet.h"

extern char *generate_planet_name();

int main() {
    char *n = generate_planet_name();
    printf("%s\n", n);
    free(n);
    return 0;
}