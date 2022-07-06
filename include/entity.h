<<<<<<< HEAD
=======
#ifndef ENTITY_H
#define ENTITY_H

>>>>>>> d2c3fc6 (added header files)
#include <stdbool.h>

typedef enum EntitySex {
    MALE,
    FEMALE
} entity_sex_t;

typedef struct Entity {
    char *name;
    int speed;
    int health;
    int damage;
    bool is_agressive;
    bool is_plant;
    entity_sex_t sex;
<<<<<<< HEAD
} entity_t;
=======
} entity_t;

// Creates a random entity
entity_t *create_random_entity(bool is_plant);

#endif
>>>>>>> d2c3fc6 (added header files)
