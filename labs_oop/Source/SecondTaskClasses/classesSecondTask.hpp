#ifndef classesSecondTask_hpp
#define classesSecondTask_hpp

#include <stdio.h>
#include <iostream>

class FuzzyNumber{
private:
    double *x;
    double *e1;
    double *e2;
public:
    FuzzyNumber();
    FuzzyNumber(double _x,double _e1, double _e2);
    FuzzyNumber(FuzzyNumber& First);
    double GetX();
    double GetE1();
    double GetE2();
    const FuzzyNumber operator+(const FuzzyNumber& other)const;
    const FuzzyNumber operator-(const FuzzyNumber& other)const;
    const FuzzyNumber operator*(const FuzzyNumber& other)const;
    const FuzzyNumber operator/(const FuzzyNumber& other)const;
    const FuzzyNumber& operator=(const FuzzyNumber& other);
    friend std::ostream& operator<<(std::ostream& out,FuzzyNumber other);
    friend std::istream& operator>>(std::istream& in,FuzzyNumber& other);
    friend bool operator==(FuzzyNumber First, FuzzyNumber Second);
    friend bool operator!=(FuzzyNumber First, FuzzyNumber Second);
    ~FuzzyNumber();
};

#endif /* classes_hpp */
