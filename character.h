#ifndef ADVENTURE_GAME_CHARACTER_H
#define ADVENTURE_GAME_CHARACTER_H
#include "includes.h"
#include "main.h"

using namespace std;
typedef struct lvlUp {

    int health = 0,
            mana = 0,
            strength = 0,
            stamina = 0,
            intellect = 0;
} lvlUp;



typedef struct character {

    string name;
    int health = 0,
            mana = 0,
            level = 0,
            expChar = 0,
            strength = 0,
            stamina = 0,
            intellect = 0,
            weaponAttack,
            spellAttack,
            souls = 1;
    lvlUp lvlBonus;
   // spells spell;
} character;
#endif //ADVENTURE_GAME_CHARACTER_H
