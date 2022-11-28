#ifndef Node_hpp
#define Node_hpp

#include <iostream>

template <class T>
struct Node {
    T data;
    Node* next;
    Node(const T& value, Node* Next) {
        data = value;
        next = Next;
    }
//    ~Node() {
//        delete next;
//    }
};

#endif /* Node_hpp */
