#include "Pair.hpp"

Pair::Pair(){
    a = 0.0;
    b = 0.0;
}
//Pair::Pair(std::string str){
//    std::string first ="",second ="", first_fract="1",second_fract="1";
//    bool flag_first = false, flag_second = false, flag = false;
//    for (auto i : str) {
//        if(flag ==  false){
//            if(flag_first == true && flag == false)
//                first_fract += i;
//            if(i == '/'){
//                flag_first = true;
//                first_fract = "";
//            }
//            if(i == ' ' || i == ',')
//                flag = true;
//            if(flag_first == false && flag == false)
//                first += i;
//        }
//        else{
//            if(flag_first == true)
//                second_fract += i;
//            if(i == '/'){
//                flag_second = true;
//                second_fract = "";
//            }
//            if(flag_second == false)
//                second += i;
//        }
//    }
//    if (flag_first == false && flag_second == false) {
//        a = stoi(first);
//        b = stoi(second);
//    }
//}

Pair::Pair(int _a, int _b){
    a = _a;
    b = _b;
}

void Pair::SetA(int _a){
    a = _a;
}
void Pair::SetB(int _b){
    b =_b;
}

const Pair Pair::operator-(const Pair& other)const{
    Pair res(this->a - other.a, this->b - other.b);
    return res;
}

const Pair Pair::operator+(const Pair& other)const{
    Pair res(this->a + other.a, this->b + other.b);
    return res;
}

Pair* Pair::operator*(const Pair& other)const{
    Pair* tmp = new Pair(this->a * other.a, this->b * other.b);
    return tmp;
}

const Pair Pair::operator/(const Pair& other)const{
    Pair res(this->a / other.a, this->b / other.b);
    return res;
}

Pair& Pair::operator=(Pair& other){
    this->a = other.a;
    this->b = other.b;
    return *this;
}

bool operator==(Pair first, Pair second){
    return (first.a == second.a && first.b == second.b);
}

bool operator!=(Pair first, Pair second){
    return (first.a != second.a || first.b != second.b);
}

std::ostream& operator<<(std::ostream& out, Pair& other){
    out<<"( "<<other.a<<", "<<other.b<<" )\n";
    return out;
}
