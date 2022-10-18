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

    Fraction(const Fraction& right)
    {
        int_part = right.int_part;
        fract_part = right.fract_part;
    }

    void setInt(const int& i_part);

    void setFract(const unsigned int& f_part);

    int getInt();

    unsigned int getFract();

    std::string to_String()
    {
        std::string out = std::to_string(int_part) + ".";
        for (int i = 0; i < std::to_string(n).size()-1 - std::to_string(fract_part).size(); ++i)
        {
            out += "0";
        }
        out += std::to_string(fract_part);
        return out;
    }

    Fraction& operator=(Fraction& right)
    {
        if (this == &right) {
            return *this;
        }
        int_part = right.getInt();
        fract_part = right.getFract();
        return *this;
    }

    
    const Fraction& operator+(const Fraction& i) {
        return Fraction(int_part + i.int_part + (fract_part + i.fract_part) / n, (fract_part + i.fract_part) % n);
        return i;
    }

     const Fraction operator-(const Fraction& i) {
        return Fraction(-i.int_part, i.fract_part);
    }

    friend const Fraction& operator++(Fraction& i) {
        i.int_part++;
        return i;
    }

    friend const Fraction operator++(Fraction& i, int) {
        Fraction oldValue(i.int_part, i.fract_part);
        i.int_part++;
        return oldValue;
    }

    friend const Fraction& operator--(Fraction& i) {
        i.int_part--;
        return i;
    }

    friend const Fraction operator--(Fraction& i, int) {
        Fraction oldValue(i.int_part, i.fract_part);
        i.int_part--;
        return oldValue;
    }

    friend const Fraction operator+(const Fraction& left, const Fraction& right) {
        return Fraction(left.int_part + right.int_part + (left.fract_part + right.fract_part) / n, (left.fract_part + right.fract_part) % n);
    }

    friend const Fraction operator-(const Fraction& left, const Fraction& right) {

        if (left.fract_part < right.fract_part)
        {
            return Fraction(left.int_part - right.int_part - 1, (left.fract_part + n - right.fract_part) % n);
        }
        else
        {
            return Fraction(left.int_part - right.int_part, (left.fract_part - right.fract_part) % n);
        }
    }

    friend const Fraction operator*(const Fraction& left, const Fraction& right) {
        return Fraction(((n * left.int_part + left.fract_part) * (n * right.int_part + right.fract_part)) / n*n, ((n * left.int_part + left.fract_part) * (n * right.int_part + right.fract_part)) % n*n);
    }

    friend Fraction& operator+=(Fraction& left, const Fraction& right) {
        left.int_part = right.int_part + (left.fract_part + right.fract_part) / n;
        left.fract_part = (left.fract_part + right.fract_part) % n;
        return left;
    }

    friend Fraction& operator-=(Fraction& left, const Fraction& right) {
        if (left.fract_part < right.fract_part)
        {
            left.int_part -= (right.int_part + 1);
            left.fract_part = (left.fract_part + n - right.fract_part) % n;
        }
        else
        {
            left.int_part -= right.int_part;
            left.fract_part = (left.fract_part - right.fract_part) % n;
        }

    }

    friend Fraction& operator*=(Fraction& left, const Fraction& right) {
        int i_part = left.int_part;
        unsigned int f_part = left.fract_part;
        left.int_part = ((n * i_part + f_part) * (n * right.int_part + right.fract_part)) / n;
        left.fract_part = ((n * i_part + f_part) * (n * right.int_part + right.fract_part)) % n;
        return left;
    }

    friend bool operator==(const Fraction& left, const Fraction& right) {
        return left.int_part == right.int_part && left.fract_part == right.fract_part;
    }

    friend bool operator!=(const Fraction& left, const Fraction& right) {
        return left.int_part != right.int_part || left.fract_part != right.fract_part;
    }

    friend bool operator>(const Fraction& left, const Fraction& right) {
        return left.int_part > right.int_part || (left.fract_part > right.fract_part && left.int_part == right.int_part);
    }

    friend bool operator<(const Fraction& left, const Fraction& right) {
        return left.int_part < right.int_part || (left.fract_part < right.fract_part&& left.int_part == right.int_part);
    }

};


#endif /* Fraction_hpp */
