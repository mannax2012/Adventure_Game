#include "includes.h"

using namespace std;

string weaponTypeF(materials weaponQuality) {
    map<materials, string> MaterialToStringMap{
            {materials::Wood, "Wood"},
            {materials::Oak, "Oak"},
            {materials::Copper, "Copper"},
            {materials::Bronze, "Bronze"},
            {materials::Iron, "Iron"},
            {materials::Steel, "Steel"},
            {materials::Mithril, "Mithril"},
    };
    return MaterialToStringMap[weaponQuality];
}

string weaponChoiceF(int weaponChoice){
    string weaponType;

    switch (weaponChoice) {
        case sword:
            weaponType = "Sword";
            break;
        case staff:
            weaponType = "Staff";
            break;
    }
    return weaponType;
}