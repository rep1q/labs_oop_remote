#include "NewFuzzyNumber.hpp"

void NewFuzzyNumber::summ(NewPair* a, NewPair* b){
    NewPair* tmp2 = new NewFuzzyNumber;
    *tmp2 = *b;
    NewFuzzyNumber* cur = dynamic_cast<NewFuzzyNumber*>(tmp2);
    NewPair* tmp = new NewFuzzyNumber;
    *tmp = *a;
    NewFuzzyNumber* param = dynamic_cast<NewFuzzyNumber*>(tmp);
    NewFuzzyNumber res(*cur->a + *param->a, *cur->x + *param ->x, *cur->b + *param->b);
    res.print();
}
void NewFuzzyNumber::del(NewPair* a, NewPair* b){
    NewPair* tmp2 = new NewFuzzyNumber;
    *tmp2 = *b;
    NewFuzzyNumber* cur = dynamic_cast<NewFuzzyNumber*>(tmp2);
    NewPair* tmp = new NewFuzzyNumber;
    *tmp = *a;
    NewFuzzyNumber* param = dynamic_cast<NewFuzzyNumber*>(tmp);
    NewFuzzyNumber res(*cur->a / *param->a, *cur->x / *param ->x, *cur->b / *param->b);
    res.print();
}

void NewFuzzyNumber::mul(NewPair* a, NewPair* b){
    NewPair* tmp2 = new NewFuzzyNumber;
    *tmp2 = *b;
    NewFuzzyNumber* cur = dynamic_cast<NewFuzzyNumber*>(tmp2);
    NewPair* tmp = new NewFuzzyNumber;
    *tmp = *a;
    NewFuzzyNumber* param = dynamic_cast<NewFuzzyNumber*>(tmp);
    NewFuzzyNumber res(*cur->a * *param->a, *cur->x * *param ->x, *cur->b * *param->b);
    res.print();
}

void NewFuzzyNumber::print(){
    std::cout<<"( "<<*this->x - GetA() <<", "<<*this->x<<", "<<*this->x + GetB()<<" )\n";
}

NewFuzzyNumber::~NewFuzzyNumber(){
    delete x;
}
