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
} entity_t;