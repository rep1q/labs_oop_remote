#ifndef Iterator_hpp
#define Iterator_hpp

#include <iostream>
#include "Node.hpp"

template <class T>
class Iterator {
    Node<T>* Current;
public:
    Iterator() {
        Current = nullptr;
    }
    Iterator(Node<T>* Cur) {
        Current = Cur;
    }
    Node<T>* getNode() {
        return Current;
    }
    const T& operator*() {
        return Current->data;
    }
    void operator++() {
        Current = Current->next;
    }
    void advance(int n) {
        for (int i = 0; i < n; i++)
            Current = Current->next;
    }
    bool operator==(const Iterator& It) const{
        return (Current == It.Current);
    }
    bool operator!=(const Iterator& It) const{
        return (Current != It.Current);
    }
};


#endif /* Iterator_hpp */
