#ifndef NewFraction_hpp
#define NewFraction_hpp

#include <iostream>
#include "../NewPair.hpp"

class NewFraction : public NewPair{
private:
    int count = 0;
public:
    NewFraction():NewPair(){};
    NewFraction(int _a, int _b):NewPair(_a, _b){
        int x = _b;
        while(x>0){
            if (x%10==0)
                ++count;
            x/=10;
        }
        for (int i = 0; i<count; ++i) {
                _b/=10;
        }
        
        
    };
    void summ(NewPair* a, NewPair* b)override;
    void del(NewPair* a, NewPair* b)override;
    void mul(NewPair* a, NewPair* b)override;
    void minus(NewPair* a, NewPair* b)override;
    void print()override;
    
};

#endif /* Fraction_hpp */
