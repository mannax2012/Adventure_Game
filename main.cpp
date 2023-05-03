#include "includes.h"

using namespace std;
const short minVal = 1;
const short maxVal = 5;
int cExpGainTotal = 0;
float level = level + (cExpGainTotal / 1000);
const string pError = "Incorrect entry - Please try again.";
string weaponType;
string charClassVal;
string weaponQualityType;
int classSelect;
weapons weaponChoice = weapons::unarmed;
materials weaponQuality = materials::Wood;
pClasses characterClass;
lvlUp lvlBonus;
/* Function Declaration */

int exit(){
        return -1;
    }

/* Main Function */

int main() {
   int pStart;
    cout << "Would you like you start the game? ( 1 = Yes ) ( 2 = No )";
    cin >> pStart;
    if ((cin.fail())) {
        cout << pError << endl;
        cin.clear();
        cin.ignore(std::numeric_limits<int>::max(), '\n');
    }
    switch (pStart) {
        case 1:
            cout << "Starting game....." << endl;
        startGame();
        break;
        case 2:
            cout << "Exiting...." << endl;
        exit();
        break;
        default:
            cout << pError << endl;
           return main();

    }
}

void nextScreen01(character createChar){
    int choosePath;
    cout << "You start your journey deep in the woods and see two paths ahead of you.\n Which path do you choose? " << endl;
    cout << "1. Left\n"
            "2. Right" << endl;
    cout << "Choose: ";
    cin >> choosePath;\
    if ((cin.fail())) {
        cout << pError << endl;
        cin.clear();
        cin.ignore(std::numeric_limits<int>::max(), '\n');
    }
    switch (choosePath){
        case 1:
            cout << "As you travel you find a weapon that seems to be in better condition than your current weapon." << endl;
            createChar.expChar += 1000;
            weaponQuality = materials::Oak;
            weaponQualityType = weaponTypeF(weaponQuality);
            cout << "Looted: " << weaponQualityType << " " << weaponType << endl;
            levelUpTask(createChar, characterClass, lvlBonus);
            system("pause");
            printInfo(createChar, lvlBonus);
            nextScreen02();
            break;
        case 2:
            cout << "You decide to take the path to the right. As you walk you hear something moving in the brush and feel as if you are being watched." << endl;
            createChar.souls = createChar.souls - 1;
            cout << "Lives remaining: " << createChar.souls << endl;
            system("pause");
            nextScreen03();
            break;

    }
}
void nextScreen02(){
    cout << "Made it to nextScreen02.";
}

void nextScreen03(){
    cout << "Made it to nextScreen03.";
}

void startGame() {
    string characterName;
    cout << "Please input character name: ";
    cin >> characterName;

   //srand(time(NULL));
    character player = characterCreation(characterName);
    cout << "Your Character " << characterName << " heads out on their first adventure!" << endl;
    pMainScreen(characterName);
}

/* Function Definition */
character characterCreation(string characterName) {
    classes charClass;
    character createChar;
    //createChar.levelBonus = level * (rand() % 5 + 5);
    charClassVal = charClassSelect(characterClass);
    weaponQualityType = weaponTypeF(weaponQuality);
    createChar.name = characterName;
    createChar.expChar += createChar.expChar + cExpGainTotal;
    createChar.level = createChar.level + (createChar.expChar / 1000);
   // createChar.strength = (rand() % 5 + 5) + charClass.bonusStr;
    createChar.stamina = (rand() % 5 + 5);
   //createChar.intellect = (rand() % 5 + 5) + charClass.bonusInt;
    createChar.health = (2 * createChar.stamina);
   // createChar.mana += (3 * createChar.intellect) + charClass.bonusMana;
   // createChar.weaponAttack = ((2 * createChar.strength) + charClass.bonusStr) * (static_cast<int>(weaponQuality));
   // createChar.spellAttack = (createChar.spell.fire + (createChar.intellect * 2)) + charClass.bonusInt;
   // createChar.souls = (rand() % (maxVal - minVal + 1)) + minVal;
    return createChar;
}
void printInfo(character createChar, lvlUp lvlBonus) {
    classes charClass;
    weaponType = weaponChoiceF(weaponChoice);
    weaponQualityType = weaponTypeF(weaponQuality);

   // charClass.bonusMana = createChar.intellect;
  //  charClass.bonusSpell = (rand() % (maxVal - minVal + 1)) + minVal;

    cout << "Character Name: " << createChar.name << endl;
    cout << "Class: " << charClassVal << endl;
    cout << "Character Level: " << createChar.level + (createChar.expChar / 1000) << endl;
    cout << "Experience: " << createChar.expChar << endl;
    cout << "Health Points: " << createChar.health << endl;
    //cout << "Mana Points: " << createChar.mana << endl;
    //cout << "Strength: " << createChar.strength << endl;
    cout << "Stamina: " << createChar.stamina << endl;
    //cout << "Intellect: " << createChar.intellect << endl;
    cout << "Weapon Type: " << weaponQualityType << " " << weaponType << endl;
    //cout << "Attack Power: " << createChar.weaponAttack << endl;
    //cout << "Spell Power: " << createChar.spellAttack << endl;
    //cout << "Lives Remaining: " << createChar.souls << "\nYou got " << createChar.souls - 1 << " bonus Lives." << endl;
    system("pause");

}

int pMainScreen(string characterName){
    classes charClass;
    character createChar;
    lvlUp lvlBonus;
    cout << "Before you begin your quest, you must select your class: " << endl;
    cout << "1. Warrior"
            "\n2. Mage" << endl;
    cout << "Which do you choose? " << endl;
    cin >> classSelect;
    character player = characterCreation(characterName);
    if ((cin.fail())) {
        cout << pError << endl;
        pMainScreen(characterName);
        cin.clear();
        cin.ignore(std::numeric_limits<int>::max(), '\n');
    }
    switch (classSelect) {
        case 1:
            charClass.bonusHealth = 100;
            charClass.bonusStr = 10;
            charClass.bonusMana = 10;
            charClass.bonusInt = 1;
            createChar.health += charClass.bonusHealth;
            createChar.strength += charClass.bonusStr;
            createChar.mana += charClass.bonusMana;
            createChar.intellect += charClass.bonusInt;
            break;
        case 2:
            charClass.bonusMana = 100;
            charClass.bonusInt = 10;
            charClass.bonusHealth = 10;
            charClass.bonusStr = 1;
            createChar.health += charClass.bonusHealth;
            createChar.strength += charClass.bonusStr;
            createChar.mana += charClass.bonusMana;
            createChar.intellect += charClass.bonusInt;
            break;
    }

    switch (classSelect) {
        case 1:
            characterClass = pClasses::Warrior;
            cout << "You selected " << charClassSelect(characterClass) << " \n";
            weaponChoice = weapons::sword;
            weaponQuality = materials::Wood;
            cout << "BONUS STATS: " << endl;
            cout << "Health: " << charClass.bonusHealth << endl;
            printInfo(player, lvlBonus);
            nextScreen01(createChar);
            break;

        case 2:
            characterClass = pClasses::Mage;
            cout << "You selected " << charClassSelect(characterClass) << " \n";
            weaponChoice = weapons::staff;
            weaponQuality = materials::Wood;
            cout << "BONUS STATS: " << "Health: " << charClass.bonusHealth;
            printInfo(player, lvlBonus);
            nextScreen01(createChar);
            break;
        default:
            cout << pError << endl;
            pMainScreen(characterName);
    }
    return 0;
}