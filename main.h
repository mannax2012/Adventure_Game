#ifndef ADVENTURE_GAME_MAIN_H
#define ADVENTURE_GAME_MAIN_H
#include "includes.h"
using namespace std;
int exit();
int pMainScreen(string basicString);

/* Materials Structure */
enum pClasses {Warrior, Mage};
enum materials {Wood = 1, Oak = 2, Copper = 3, Bronze = 4, Iron = 5, Steel = 6, Mithril = 7};

/* Weapon Structure */
enum weapons {sword = 5, staff = 2, unarmed = 1};


/* Spell Structure */
typedef struct spells {
    int fire = 4, frost = 6, dark = 8, chaos = 10;
} spells;

/*Classes*/
typedef struct classes {
    string className;
    int bonusHealth = 0, bonusMana = 0, bonusStr = 0, bonusStamina = 0, bonusInt = 0, bonusSpell = 0;
    spells spell;
} classes;

/* Character Structure */
typedef struct character {
    string name;
    classes className;
    int health = 100, mana = 100, level = 1, expChar = 0, strength, stamina, intellect, weaponAttack, spellAttack, souls = 1;
    spells spell;
} character;

character characterCreation(string name);
void printInfo(character createChar);
void startGame();
void nextScreen01(character createChar);
void nextScreen02();
void nextScreen03();
string weaponTypeF(materials weaponQuality);
string weaponChoiceF(int weaponChoice);
#endif //ADVENTURE_GAME_MAIN_H