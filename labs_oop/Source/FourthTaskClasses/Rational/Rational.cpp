#include "Rational.hpp"

const Rational Rational::operator-(const Rational& other)const{
    if (this->b == other.b){
        Rational res(this->a - other.a, this->b);
        return res;
    }
    else{
        Rational res(this->a*other.b - other.a*this->b,this->b*other.b);
        return res;
    }
}

const Rational Rational::operator+(const Rational& other)const{
    if (this->b == other.b){
        Rational res(this->a + other.a, this->b);
        return res;
    }
    else{
        Rational res(this->a*other.b + other.a*this->b,this->b*other.b);
        return res;
    }
}

//const Rational Rational::operator*(const Rational& other)const{
//    Rational res(this->a*other.a,this->b*other.b);
//    return res;
//}

const Rational Rational::operator/(const Rational& other)const{
    Rational res(this->a*other.b,this->b*other.a);
    return res;
}

std::ostream& operator<<(std::ostream& out, Rational& other){
    out<<other.a<<"/"<<other.b;
    return out;
}

Rational& Rational::operator=(Rational& other){
    this->a = other.a;
    this->b = other.b;
    return *this;
}


bool operator==(Rational first, Rational second){
    return (first.a == second.a && first.b == second.b);
}
bool operator!=(Rational first, Rational second){
    return (first.a != second.a || first.b != second.b);
}
