#ifndef NewPair_hpp
#define NewPair_hpp

#include <iostream>

class NewPair{
protected:
    int *a,*b;
public:
    NewPair();
    NewPair(int _a, int _b);
    virtual void print() = 0;
    virtual void summ(NewPair*, NewPair*)=0;
    virtual void del(NewPair*, NewPair*)=0;
    virtual void mul(NewPair*, NewPair*)=0;
    int GetA();
    int GetB();
    virtual ~NewPair() {
        delete a;
        delete b;
    }
};

#endif /* NewPair_hpp */
