//////////////////////////////////////////////////////////////////////////////
// Source.cpp

#include "FloatPower.h"
#include <iostream>
using namespace std;

FloatPower makeFloatPower(double x, double y)
{
    FloatPower z;
    if (!z.Init(x, y))
        cout << "Wrong arguments to Init!" << endl;
    return z;
}

int main()
{
    FloatPower z;
    z.Read();
    z.Display();
    cout << "Result of power = " << z.Power() << endl << endl;

    double x, y;
    cout << "Input non-zero real number and exponent:" << endl;
    cout << " Number (non-zero) = "; cin >> x;
    cout << " Exponent = "; cin >> y;

    z = makeFloatPower(x, y);
    z.Display();
    cout << "Result of power = " << z.Power() << endl;

    return 0;
}
