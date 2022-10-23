#ifndef Fraction_hpp
#define Fraction_hpp

#include <stdio.h>
#include <iostream>
#include <string>


const int n = 100;

class Fraction
{
private:
    int int_part;
    unsigned int fract_part;
public:

    Fraction();

    Fraction(const int& i_part, const unsigned int& f_part);

    Fraction(const Fraction& right);

    void setInt(const int& i_part);

    void setFract(const unsigned int& f_part);

    int getInt();

    unsigned int getFract();

    std::string to_String();

    Fraction& operator=(Fraction right);

    friend Fraction operator+(const Fraction& left, const Fraction& right);

    friend Fraction operator-(const Fraction& left, const Fraction& right);

    friend Fraction operator*(const Fraction& left, const Fraction& right);

    friend Fraction operator/(const Fraction& left, const Fraction& right);
    
    Fraction& operator+=(const Fraction& right);

    Fraction& operator-=(const Fraction& right);

    Fraction& operator*=(const Fraction& right);

    friend bool operator==(const Fraction& left, const Fraction& right);

    friend bool operator!=(const Fraction& left, const Fraction& right);

    friend bool operator>(const Fraction& left, const Fraction& right);

    friend bool operator<(const Fraction& left, const Fraction& right);
    
    friend std::ostream& operator<<(std::ostream& out,Fraction& other);

};


#endif
