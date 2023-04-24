#include "includes.h"

using namespace std;
/*
short pInputDice;
short pInputSides;
int main_combat();
void rollScreen();
void diceRoll(short pInputSides, short pSum)
const string pError = "Incorrect entry - Please try again.";
short pArray[7] = {4,6,8,10,12,20,100};
short pSum = 0;
*/

/*
void diceRoll(short pInputSides, short pSum) {
    const short minVal = 1;
    const short maxVal = pInputSides;
    short pRoll = (rand() % (maxVal - minVal + 1)) + minVal;
    pSum = pSum + pRoll;
    cout << "You roll a D" << pInputSides << " for " << pRoll << endl;
}
void pMainScreen(){
    if (pSum > 0) {
        pSum = 0;
    }
    cout << "How many sides would you like the dice to have? (4, 6, 8, 10, 12, 20, 100) ENTER A VALUE: ";
    cin >> pInputSides;

    //check to see if it's a number or not.
    if ((cin.fail())) {
        cout << pError << endl;
        cin.clear();
        cin.ignore(std::numeric_limits<int>::max(),'\n');
        pMainScreen();
    }
    bool pExists = std::find(std::begin(pArray), std::end(pArray), pInputSides) != std::end(pArray);
    if (pExists) {
        rollScreen();
    } else { cout << pError << endl; pMainScreen();}
}

void rollScreen() {
    cout << "How many " << pInputSides << " sided dice do you want to roll?(1 - 100) ";
    cin >> pInputDice;
    if (pInputDice >= 101) {
        cout << pError << endl;
        rollScreen();
    }
    //check to see if it's a number or not.
    if ((cin.fail())) {
        cout << pError << endl;
        cin.clear();
        cin.ignore(std::numeric_limits<int>::max(), '\n');
        rollScreen();
    }else{
        for (int i = 0; i < pInputDice; i++)
            diceRoll();
        cout << "You roll " << pInputDice << " D" << pInputSides << " for a total of: " <<  pSum << endl;
        cout << "Average of your rolls: " << pSum / pInputDice << endl;
        pMainScreen();
    }
}

void main_combat() {
   cout << "ROBOT VOICE: DOING COMBAT CALCULATIONS... BEEP BOOP!";

}
*/
