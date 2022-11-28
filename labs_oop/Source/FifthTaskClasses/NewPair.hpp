#ifndef NewPair_hpp
#define NewPair_hpp

#include <iostream>

class NewPair{
protected:
    double *a,*b;
public:
    NewPair();
    NewPair(double _a, double _b);
    virtual void print() = 0;
    virtual void summ(NewPair*, NewPair*)=0;
    virtual void del(NewPair*, NewPair*)=0;
    virtual void mul(NewPair*, NewPair*)=0;
    virtual void minus(NewPair*, NewPair*)=0;
    double GetA();
    double GetB();
    virtual ~NewPair() {
        delete a;
        delete b;
    }
};

#endif /* NewPair_hpp */
