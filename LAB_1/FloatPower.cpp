//////////////////////////////////////////////////////////////////////////////
// FloatPower.cpp

#include "FloatPower.h"
#include <iostream>
#include <cmath>
using namespace std;

bool FloatPower::Init(double x, double y)
{
    if (x != 0) // Перевірка, що first не дорівнює нулю
    {
        first = x;
        second = y;
        return true;
    }
    else
    {
        return false;
    }
}

void FloatPower::Read()
{
    double x, y;
    do
    {
        cout << "Input non-zero real number and exponent:" << endl;
        cout << " Number (non-zero) = "; cin >> x;
        cout << " Exponent = "; cin >> y;
    } while (!Init(x, y)); // Перевірка на коректність значень
}

void FloatPower::Display() const
{
    cout << endl;
    cout << " Number = " << first << endl;
    cout << " Exponent = " << second << endl;
}

double FloatPower::Power() const
{
    return pow(first, second); // Використання стандартної функції для обчислення степеня
}
