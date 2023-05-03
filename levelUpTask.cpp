#include "includes.h"
using namespace std;

character levelUpTask(character createChar, pClasses characterClass, lvlUp lvlBonus){
    cout << "You have gained a level!!" << endl;
    cout << "Character Level: " << createChar.level + (createChar.expChar / 1000) << endl;
    cout << "Experience: " << createChar.expChar << endl;
    lvlBonus.health = (rand() % 5 + 5);//((createChar.expChar / 1000) + rand()),
    lvlBonus.stamina = (rand() % 2 + 3);
    cout << "You have gained: " << endl;
    cout << "Health: " << lvlBonus.health << endl;
    cout << "Stamina: " << lvlBonus.stamina << endl;
    createChar.health += lvlBonus.health;
    createChar.stamina += lvlBonus.stamina;
    system("pause");
    printInfo(createChar, lvlBonus);
}