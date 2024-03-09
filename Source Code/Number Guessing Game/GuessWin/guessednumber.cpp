#include "guessednumber.h"
#include <cstdlib>

GuessedNumber::GuessedNumber(int min, int max) {
    this->min = min;
    this->max = max;
    value =  min + std::rand() % (max - min + 1);
    if(value % 2 == 0) hints.push_back("It's an even number");
    else hints.push_back("It's an odd number");
}

void GuessedNumber::generateHint(int mode)
{
    int hint = pow(mode, 4) * (10 - usedHints) * 2;
    min += (rand() % hint % (value - min));
    hints.push_back("It's equal to or bigger than " + QString::number(min));
    int i = lstDivisor + 1;
    for(; i <= value; i++){
        if(value % i == 0){
            hints.push_back("It's divisible by " + QString::number(i));
             break;
        }
    }
    lstDivisor = i;
    max -= (rand() % hint % (max - value));
    hints.push_back("It's equal to or smaller than " + QString::number(max));
}
