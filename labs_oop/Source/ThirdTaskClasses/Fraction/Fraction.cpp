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

Fraction::Fraction(const Fraction& right)
{
    int_part = right.int_part;
    fract_part = right.fract_part;
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

std::string Fraction::to_String()
{
    std::string out = std::to_string(int_part) + ",";
    for (int i = 0; i < std::to_string(n).size() - 1 - std::to_string(fract_part).size(); ++i)
    {
        out += "0";
    }
    out += std::to_string(fract_part);
    return out;
}

Fraction& Fraction::operator=(Fraction right)
{
    if (this == &right) {
        return *this;
    }
    int_part = right.getInt();
    fract_part = right.getFract();
    return *this;
}

Fraction operator+(const Fraction& left, const Fraction& right)
{
    return Fraction(left.int_part + right.int_part + (left.fract_part + right.fract_part) / n, (left.fract_part + right.fract_part) % n);
}

Fraction operator-(const Fraction& left, const Fraction& right)
{

    if (left.fract_part < right.fract_part)
    {
        return Fraction(left.int_part - right.int_part - 1, (left.fract_part + n - right.fract_part) % n);
    }
    else
    {
        return Fraction(left.int_part - right.int_part, (left.fract_part - right.fract_part) % n);
    }
}

Fraction operator*(const Fraction& left, const Fraction& right)
{
    return Fraction(((n * left.int_part + left.fract_part) * (n * right.int_part + right.fract_part)) / (n * n),
        ((n * left.int_part + left.fract_part) * (n * right.int_part + right.fract_part)) % (n * n) / n);
}

Fraction operator/(const Fraction& left, const Fraction& right)
{
    return Fraction(int((left.int_part*1.0 + left.fract_part/100.0) / (right.int_part*1.0 + right.fract_part/100.0)),
        int(((left.int_part*1.0 + left.fract_part/100.0) / (right.int_part*1.0 + right.fract_part/100.0)) *100));
}

Fraction& Fraction::operator+=(const Fraction& right)
{
    int_part = right.int_part + (fract_part + right.fract_part) / n;
    fract_part = (fract_part + right.fract_part) % n;
    return *this;
}

Fraction& Fraction::operator-=(const Fraction& right)
{
    if (fract_part < right.fract_part)
    {
        int_part -= (right.int_part + 1);
        fract_part = (fract_part + n - right.fract_part) % n;
    }
    else
    {
        int_part -= right.int_part;
        fract_part = (fract_part - right.fract_part) % n;
    }
    return *this;
}

Fraction& Fraction::operator*=(const Fraction& right)
{
    int i_part = this->int_part;
    unsigned int f_part = this->fract_part;
    this->int_part = ((n * i_part + f_part) * (n * right.int_part + right.fract_part)) / (n * n);
    this->fract_part = ((n * i_part + f_part) * (n * right.int_part + right.fract_part)) % (n * n) / n;
    return *this;
}

bool operator==(const Fraction& left, const Fraction& right)
{
    return left.int_part == right.int_part && left.fract_part == right.fract_part;
}

bool operator!=(const Fraction& left, const Fraction& right)
{
    return !(left == right);
}

bool operator>(const Fraction& left, const Fraction& right)
{
    return left.int_part > right.int_part || (left.fract_part > right.fract_part && left.int_part == right.int_part);
}

bool operator<(const Fraction& left, const Fraction& right)
{
    return left.int_part < right.int_part || (left.fract_part < right.fract_part&& left.int_part == right.int_part);
}

std::ostream& operator<<(std::ostream& out, Fraction& other){
    out<<other.int_part<<"."<<other.fract_part;
    return out;
}
