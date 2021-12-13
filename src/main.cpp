#include "bowling.h"

//test values
vector<int> tooSmall{2,5};
vector<int> tooBig{10,0,5,5,7,2,3,7,0,5,0,0,0,0,0,0,0,10,10,0,4,5,5};
vector<int> turnBiggerThan10{0,0,0,0,0,0,7,8,0,0,0,0,0,0,0,0,0,0,0,0};
vector<int> finalThrowNotASpare{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,3,1};
vector<int> finalThrowIsASpare{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,6,1};
vector<int> finalThrowNotAStrike{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,0,6,3};
vector<int> finalThrowIsAStrike{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,0,6,3};
vector<int> total100{10,0,5,5,7,2,3,7,0,5,0,0,0,0,0,0,0,10,10,0,4,5};
vector<int> total150{10,0,5,5,7,2,3,7,2,5,3,3,6,4,10,0,0,10,10,0,4,5};
vector<int> total0{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};


int main() {
    int total = calculator(tooSmall); //erreur
    total = calculator(tooBig); //erreur
    total = calculator(turnBiggerThan10); //erreur
    total = calculator(finalThrowNotASpare); //erreur
    total = calculator(finalThrowIsASpare);
    total = calculator(finalThrowNotAStrike); //erreur
    total = calculator(finalThrowIsAStrike);
    total = calculator(total100);
    total = calculator(total150);
    total = calculator(total0);
    return 0;
}