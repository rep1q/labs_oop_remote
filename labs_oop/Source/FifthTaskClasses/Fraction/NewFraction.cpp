#include "NewFraction.hpp"
#include <string>

void NewFraction::summ(NewPair* a, NewPair* b){
    std::string c,c_fract,d,d_fract,resa,resb;
    c = std::to_string(a->GetA());
    c_fract = std::to_string(a->GetB());
    d = std::to_string(b->GetA());
    d_fract = std::to_string(b->GetB());
    resa = c+"."+c_fract;
    resb = d+"."+d_fract;
    double x = std::stof(resa),y = std::stof(resb);
    std::cout<<x+y<<"\n";
}

void NewFraction::del(NewPair* a, NewPair* b){
    std::string c,c_fract,d,d_fract,resa,resb;
    c = std::to_string(a->GetA());
    c_fract = std::to_string(a->GetB());
    d = std::to_string(b->GetA());
    d_fract = std::to_string(b->GetB());
    resa = c+"."+c_fract;
    resb = d+"."+d_fract;
    double x = std::stof(resa),y = std::stof(resb);
    std::cout<<x/y<<"\n";
}


void NewFraction::mul(NewPair* a, NewPair* b){
    std::string c,c_fract,d,d_fract,resa,resb;
    c = std::to_string(a->GetA());
    c_fract = std::to_string(a->GetB());
    d = std::to_string(b->GetA());
    d_fract = std::to_string(b->GetB());
    resa = c+"."+c_fract;
    resb = d+"."+d_fract;
    double x = std::stof(resa),y = std::stof(resb);
    std::cout<<x*y<<"\n";
}


void NewFraction::print(){
    std::cout<<*a<<"."<<*b<<"\n";
}

