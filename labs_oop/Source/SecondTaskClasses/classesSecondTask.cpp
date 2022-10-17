#include "classesSecondTask.hpp"

FuzzyNumber::FuzzyNumber(){
    x = new double;
    e1 = new double;
    e2 = new double;
    *x = 0;
    *e1 = 0;
    *e2 = 0;
}

FuzzyNumber::FuzzyNumber(double _x, double _e1, double _e2){
    x = new double;
    e1 = new double;
    e2 = new double;
    *x = _x;
    *e1 = _e1;
    *e2 = _e2;
}
double FuzzyNumber::GetX(){
    double _x = *x;
    return _x;
}

double FuzzyNumber::GetE1(){
    double _e = *e1;
    return _e;
}
double FuzzyNumber::GetE2(){
    double _e = *e2;
    return _e;
}


FuzzyNumber::FuzzyNumber(FuzzyNumber& First){
    x = new double;
    e1 = new double;
    e2 = new double;
    *x = *First.x;
    *e1 = *First.e1;
    *e2 = *First.e2;
}

const FuzzyNumber FuzzyNumber::operator+(const FuzzyNumber& other) const{
    FuzzyNumber temp;
    *temp.x = *x + *other.x;
    *temp.e1 = *e1 + *other.e1;
    *temp.e2 = *e2 + *other.e2;
    return temp;
}

const FuzzyNumber FuzzyNumber::operator-(const FuzzyNumber& other) const{
    FuzzyNumber temp;
    *temp.x = *x - *other.x;
    *temp.e1 = *e1 - *other.e1;
    *temp.e2 = *e2 - *other.e2;
    return temp;
}

const FuzzyNumber FuzzyNumber::operator*(const FuzzyNumber& other) const{
    FuzzyNumber temp;
    *temp.x = *x * *other.x;
    *temp.e1 = *e1 * *other.e1;
    *temp.e2 = *e2 * *other.e2;
    return temp;
}

const FuzzyNumber FuzzyNumber::operator/(const FuzzyNumber& other) const{
    FuzzyNumber temp;
    *temp.x = *x / *other.x;
    *temp.e1 = *e1 / *other.e1;
    *temp.e2 = *e2 / *other.e2;
    return temp;
}

const FuzzyNumber& FuzzyNumber::operator=(const FuzzyNumber& other){
    *this->x = *other.x;
    *this->e1 = *other.e1;
    *this->e2 = *other.e2;
    return *this;
}

std::ostream& operator<<(std::ostream& out,FuzzyNumber other){
    out<<"( "<< *other.x - *other.e1 << ", "<<*other.x<<", "<<*other.x + *other.e2<<")\n";
    return out;
}

std::istream& operator>>(std::istream& in,FuzzyNumber& other){
    in>>*other.x;
    in>>*other.e1;
    in>>*other.e2;
    return in;
}

bool operator==(FuzzyNumber First, FuzzyNumber Second){
    return (First.GetX() == Second.GetX() && First.GetE1() == Second.GetE1() && First.GetE2()== Second.GetE2());
}

bool operator!=(FuzzyNumber First, FuzzyNumber Second){
    return (First.GetX() != Second.GetX() || First.GetE1()!= Second.GetE1() || First.GetE2()!= Second.GetE2());
}

FuzzyNumber::~FuzzyNumber(){
//    std::cout<<"вызвался деструктор";
    delete x;
    delete e1;
    delete e2;
}

