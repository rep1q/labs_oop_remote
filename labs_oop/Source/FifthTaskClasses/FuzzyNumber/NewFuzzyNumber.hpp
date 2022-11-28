#ifndef NewFuzzyNumber_hpp
#define NewFuzzyNumber_hpp

#include <iostream>
#include "../NewPair.hpp"

class NewFuzzyNumber:public NewPair{
private:
    double *x;
public:
    NewFuzzyNumber():NewPair(){
        x = new double(0);
    }
    NewFuzzyNumber(double _a, double _x, double _b):NewPair(_a,_b){
        x = new double(_x);
    }
    void summ(NewPair* a, NewPair* b)override;
    void del(NewPair* a, NewPair* b)override;
    void mul(NewPair* a, NewPair* b)override;
    void minus(NewPair* a, NewPair* b)override;
    void print()override;
    ~NewFuzzyNumber();
};

#endif /* FuzzyNumber_hpp */
