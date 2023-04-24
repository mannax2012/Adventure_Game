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
/*
string weaponTypeF(materials weaponQuality) {
    string weaponQualityType;
    switch (weaponQuality) {
        case Wood:
            weaponQualityType = "Wooden";
            break;
        case Oak:
            weaponQualityType = "Oak";
            break;
        case Copper:
            weaponQualityType = "Copper";
            break;
        case Bronze:
            weaponQualityType = "Bronze";
            break;
        case Iron:
            weaponQualityType = "Iron";
            break;
        case Steel:
            weaponQualityType = "Steel";
            break;
        case Mithril:
            weaponQualityType = "Mithril";
            break;

    }
    return weaponQualityType;
}
*/
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