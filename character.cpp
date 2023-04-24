#include "includes.h"
/*
string charClassSelect(int classSelect) {\
    switch (classSelect) {
        case 1:
            characterClass = "Warrior";
            break;
        case 2:
            characterClass = "Mage";
            break;
    }
    return characterClass;
}
 */
string charClassSelect(pClasses characterClass) {
    map<pClasses, string> ClassesToStringMap{
            {pClasses::Warrior, "Warrior"},
            {pClasses::Mage, "Mage"},
    };
    return ClassesToStringMap[characterClass];
}