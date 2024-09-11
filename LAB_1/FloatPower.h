//////////////////////////////////////////////////////////////////////////////
// FloatPower.h

#pragma once
class FloatPower
{
    double first, second;
public:
    bool Init(double, double);
    void Read();
    void Display() const;
    double Power() const;
};
