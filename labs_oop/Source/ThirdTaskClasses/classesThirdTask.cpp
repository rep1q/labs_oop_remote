#include "classesThirdTask.hpp"

Calculator::Calculator(){
    Fraction First;
}

Calculator::Calculator(std::string str){
    std::string one="",two="",symb;
    std::string one_fract="0",two_fract="0";
    bool flag = false;
    bool flag_fract_a = false, flag_fract_b = false;
    for (int i =0; i<str.length(); ++i) {
        if(str[i]=='+' || str[i] == '-' || str[i] =='*' || str[i] =='/' || flag == false){
            if(flag == false){
                if (flag_fract_b == true && str[i]!='+' && str[i]!='-' &&str[i]!='*' &&str[i]!='/') {
                    two_fract+=str[i];
                }
                if(str[i] == '.'){
                    flag_fract_b = true;
                    two_fract = "";
                }
                if (str[i]!='+' && str[i]!='-' &&str[i]!='*' &&str[i]!='/' && flag_fract_b == false) {
                    two +=str[i];
                }
                if(str[i]=='+' || str[i] == '-' || str[i] =='*' || str[i] =='/'){
                    flag = true;
                    symb = str[i];
                }
            }
            }
        else{
            if (flag_fract_a == true) {
                one_fract+=str[i];
            }
            if(str[i] == '.'){
                flag_fract_a = true;
                one_fract ="";
            }
            if (str[i]!='+' && str[i]!='-' &&str[i]!='*' &&str[i]!='/' && flag_fract_a == false) {
                one +=str[i];
            }
        }
    }
    Fraction First(stoi(one),stoi(one_fract));
    Fraction Second(stoi(two),stoi(two_fract));
    s = symb;
    a = Second;
    d = First;
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
    other.operations();
    out<<other.res;
    return out;
}
