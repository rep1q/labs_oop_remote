#ifndef NewFraction_hpp
#define NewFraction_hpp

#include <iostream>
#include "../NewPair.hpp"

class NewFraction : public NewPair{
public:
    NewFraction():NewPair(){};
    NewFraction(int _a, int _b):NewPair(_a, _b){};
    void summ(NewPair* a, NewPair* b)override;
    void del(NewPair* a, NewPair* b)override;
    void mul(NewPair* a, NewPair* b)override;
    void print()override;
    
};

#endif /* Fraction_hpp */
