#ifndef classesThirdTask_hpp
#define classesThirdTask_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include "Fraction/Fraction.hpp"

class Calculator{
private:
    Fraction a,d,res;
    std::string s;
public:
    Calculator();
    Calculator(Fraction& b,std::string symb,Fraction& c);
    Calculator(std::string str);
//    Calculator(Fraction& b,std::string s,int c);
//    Calculator(int b,std::string s,Fraction& c);
//    Calculator(int b,std::string s,int c);
    void operations();
    friend std::ostream& operator<<(std::ostream& out,Calculator& other);
};

#endif /* classesThirdTask_hpp */
