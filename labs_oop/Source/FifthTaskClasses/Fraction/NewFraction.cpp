#include "NewFraction.hpp"
#include <string>

void NewFraction::summ(NewPair* a, NewPair* b){
    std::string c,c_fract,d,d_fract,resa,resb;
    c = std::to_string((int)a->GetA());
    c_fract = std::to_string((int)a->GetB());
    d = std::to_string((int)b->GetA());
    d_fract = std::to_string((int)b->GetB());
    resa = c+"."+c_fract;
    resb = d+"."+d_fract;
    double x = std::stof(resa),y = std::stof(resb);
    std::cout<<"Сумма: "<<x+y<<"\n";
}

void NewFraction::del(NewPair* a, NewPair* b){
    std::string c,c_fract,d,d_fract,resa,resb;
    c = std::to_string((int)a->GetA());
    c_fract = std::to_string((int)a->GetB());
    d = std::to_string((int)b->GetA());
    d_fract = std::to_string((int)b->GetB());
    resa = c+"."+c_fract;
    resb = d+"."+d_fract;
    double x = std::stof(resa),y = std::stof(resb);
    std::cout<<"Деление: "<<x/y<<"\n";
}


void NewFraction::mul(NewPair* a, NewPair* b){
    std::string c,c_fract,d,d_fract,resa,resb;
    c = std::to_string((int)a->GetA());
    c_fract = std::to_string((int)a->GetB());
    d = std::to_string((int)b->GetA());
    d_fract = std::to_string((int)b->GetB());
    resa = c+"."+c_fract;
    resb = d+"."+d_fract;
    double x = std::stof(resa),y = std::stof(resb);
    std::cout<<"Произведение: "<<x*y<<"\n";
}


void NewFraction::minus(NewPair* a, NewPair* b){
    std::string c,c_fract,d,d_fract,resa,resb;
    c = std::to_string((int)a->GetA());
    c_fract = std::to_string((int)a->GetB());
    d = std::to_string((int)b->GetA());
    d_fract = std::to_string((int)b->GetB());
    resa = c+"."+c_fract;
    resb = d+"."+d_fract;
    double x = std::stof(resa),y = std::stof(resb);
    std::cout<<"Разность: "<<x-y<<"\n";
}

void NewFraction::print(){
    std::cout<<*a<<"."<<*b<<"\n";
}

