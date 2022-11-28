#include "NewFuzzyNumber.hpp"

void NewFuzzyNumber::summ(NewPair* a, NewPair* b){
//    NewPair* tmp2 = new NewFuzzyNumber;
//    *tmp2 = *b;
//    NewFuzzyNumber* cur = dynamic_cast<NewFuzzyNumber*>(tmp2);
//    NewPair* tmp = new NewFuzzyNumber;
//    *tmp = *a;
//    NewFuzzyNumber* param = dynamic_cast<NewFuzzyNumber*>(tmp);
//    NewFuzzyNumber res(*cur->a + *param->a, *cur->x + *param ->x, *cur->b + *param->b);
    NewFuzzyNumber* cur = dynamic_cast<NewFuzzyNumber*>(a);
    NewFuzzyNumber* param = dynamic_cast<NewFuzzyNumber*>(b);
    NewFuzzyNumber res(*cur->a + *param->a, *cur->x + *param ->x, *cur->b + *param->b);
    std::cout<<"Сумма: ";
    res.print();
}
void NewFuzzyNumber::del(NewPair* a, NewPair* b){

    NewFuzzyNumber* cur = dynamic_cast<NewFuzzyNumber*>(a);
    NewFuzzyNumber* param = dynamic_cast<NewFuzzyNumber*>(b);
    NewFuzzyNumber res(*cur->a / *param->a, *cur->x / *param ->x, *cur->b / *param->b);
    std::cout<<"Деление: ";
    res.print();
}

void NewFuzzyNumber::mul(NewPair* a, NewPair* b){

    NewFuzzyNumber* cur = dynamic_cast<NewFuzzyNumber*>(a);
    NewFuzzyNumber* param = dynamic_cast<NewFuzzyNumber*>(b);
    NewFuzzyNumber res(*cur->a * *param->a, *cur->x * *param ->x, *cur->b * *param->b);
    std::cout<<"Произведение: ";
    res.print();
}

void NewFuzzyNumber::minus(NewPair* a, NewPair* b){
    NewFuzzyNumber* cur = dynamic_cast<NewFuzzyNumber*>(a);
    NewFuzzyNumber* param = dynamic_cast<NewFuzzyNumber*>(b);
    NewFuzzyNumber res(*cur->a + *param->a, *cur->x - *param ->x, *cur->b + *param->b);
    std::cout<<"Разность: ";
    res.print();
}

void NewFuzzyNumber::print(){
    std::cout<<"( "<<*this->a<<", "<<*this->x<<", "<<*this->b<<" )\n";
}

NewFuzzyNumber::~NewFuzzyNumber(){
    delete x;
}
