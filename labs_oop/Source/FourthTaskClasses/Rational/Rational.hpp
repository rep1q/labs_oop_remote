#ifndef Rational_hpp
#define Rational_hpp

#include <iostream>
#include <string>
#include "../Pair.hpp"

class Rational : public Pair{
public:
    Rational():Pair(){};
    Rational(int _a, int _b):Pair(_a, _b){};
    const Rational operator-(const Rational& other)const;
    const Rational operator+(const Rational& other)const;
    //const Rational operator*(const Rational& other)const;
    const Rational operator/(const Rational& other)const;
    friend std::ostream& operator<<(std::ostream& out, Rational& other);
    friend bool operator==(Rational first, Rational second);
    friend bool operator!=(Rational first, Rational second);
    Rational& operator=(Rational& other);
};

#endif /* Rational_hpp */
