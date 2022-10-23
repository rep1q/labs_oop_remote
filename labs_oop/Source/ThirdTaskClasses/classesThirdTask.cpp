#include "classesThirdTask.hpp"

Calculator::Calculator(){
    Fraction First;
}
Calculator::Calculator(Fraction& b,std::string symb,Fraction& c){
    a = b;
    d = c;
    s = symb;
}

void Calculator::operations(){
    if(s=="+")
        res = a+d;
    if(s=="*")
        res = a*d;
    if(s=="-")
        res = a-d;
    if(s=="/")
        res = a/d;
}

std::ostream& operator<<(std::ostream& out,Calculator& other){
    out<<other.res;
    return out;
}
