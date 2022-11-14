#ifndef NewFuzzyNumber_hpp
#define NewFuzzyNumber_hpp

#include <iostream>
#include "../NewPair.hpp"

class NewFuzzyNumber:public NewPair{
private:
    int *x;
public:
    NewFuzzyNumber():NewPair(){
        x = new int(0);
    }
    NewFuzzyNumber(int _a, int _x, int _b):NewPair(_a,_b){
        x = new int(_x);
    }
    void summ(NewPair* a, NewPair* b)override;
    void del(NewPair* a, NewPair* b)override;
    void mul(NewPair* a, NewPair* b)override;
    void print()override;
    ~NewFuzzyNumber();
};

#endif /* FuzzyNumber_hpp */
