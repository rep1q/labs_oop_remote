#include "NewPair.hpp"

NewPair::NewPair(){
    a = new double(0);
    b = new double(0);
}

NewPair::NewPair(double _a, double _b){
    a = new double;
    b = new double;
    *a = _a;
    *b = _b;
}

double NewPair::GetA(){
    return *a;
}

double NewPair::GetB(){
    return *b;
}

