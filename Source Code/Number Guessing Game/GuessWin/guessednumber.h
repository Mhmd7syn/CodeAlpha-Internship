#ifndef GUESSEDNUMBER_H
#define GUESSEDNUMBER_H
#include <QQueue>
#include <QString>

class GuessedNumber
{
public:
    GuessedNumber(int min, int max);
    int value, lstDivisor = 2, usedHints = 0, attempts = 0, min = 0, max = 1000;
    QQueue<QString> hints;
    void generateHint(int mode);
};

#endif // GUESSEDNUMBER_H
