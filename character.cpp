#include "includes.h"
string charClassSelect(pClasses characterClass) {
    map<pClasses, string> ClassesToStringMap{
            {pClasses::Warrior, "Warrior"},
            {pClasses::Mage, "Mage"},
    };
    return ClassesToStringMap[characterClass];
}