#include "Fraction.hpp"
#include <iostream>

using namespace std;

Fraction::Fraction()
{
    int_part = 0;
    fract_part = 0;
}

Fraction::Fraction(const int& i_part, const unsigned int& f_part)
{
    int_part = i_part% n;
    fract_part = f_part% n;
}

void Fraction::setInt(const int& i_part)
{
    int_part = i_part;
}

void Fraction::setFract(const unsigned int& f_part)
{
    fract_part = f_part% n;
}

int Fraction::getInt()
{
    return int_part;
}

unsigned int Fraction::getFract()
{
    return fract_part;
}

