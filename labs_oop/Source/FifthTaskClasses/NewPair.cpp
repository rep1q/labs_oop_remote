#include "NewPair.hpp"

NewPair::NewPair(){
    a = new int(0);
    b = new int(0);
}

NewPair::NewPair(int _a, int _b){
    a = new int;
    b = new int;
    *a = _a;
    *b = _b;
}

int NewPair::GetA(){
    return *a;
}

int NewPair::GetB(){
    return *b;
}

