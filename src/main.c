#include <stdio.h>
#include <stdlib.h>
#include "../include/planet.h"

int main() {
    char *n = generate_planet_name();
    printf("%s\n", n);
    return 0;
}