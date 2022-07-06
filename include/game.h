#ifndef GAME_H
#define GAME_H

#include "./planet.h"
#include "./star_system.h"
#include "./galaxy.h"

typedef enum GameState {
    MENU,
    GAME_OVER,
    IN_SPACE,
    ON_PLANET,
    IN_BATTLE
} game_state_t;

typedef struct Game {
    galaxy_t *current_galaxy;
    star_system_t *current_system;
    planet_t *current_planet;

    int player_hp;
    int planets_visited;
    int solar_systems_visited;
    int galaxies_visited;
} game_t;

#endif
