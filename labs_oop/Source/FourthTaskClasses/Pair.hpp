#ifndef Pair_hpp
#define Pair_hpp

#include <iostream>
#include <string>

class Pair{
protected:
    int a,b;
public:
    Pair();
//    Pair(std::string str);
    Pair(int _a, int _b);
    void SetA(int _a);
    void SetB(int _b);
    const Pair operator-(const Pair& other)const;
    const Pair operator+(const Pair& other)const;
    Pair* operator*(const Pair& other)const;
    const Pair operator/(const Pair& other)const;
    friend bool operator==(Pair first, Pair second);
    friend bool operator!=(Pair first, Pair second);
    Pair& operator=(Pair& other);
    friend std::ostream& operator<<(std::ostream& out, Pair& other);
};

#endif /* Pair_hpp */
