#ifndef List_hpp
#define List_hpp

#include <iostream>
#include <string>
#include "Node.hpp"
#include "Iterator.hpp"

template <class T>
class List {
    Node<T>* head;
    int n;
public:
    List(){
        head = nullptr;
        n = 0;
    }
//    ~List(){
//        delete head;
//    }
    const Iterator<T> begin() const{
        return Iterator<T>(head);
    }
    const Iterator<T> end() const{
        return Iterator<T>(NULL);
    }
    void push_back(const T& value){
        Node<T>* tail = new Node<T>(value, NULL);
        if (head == NULL)
            head = tail;
        else {
            Iterator<T> it = begin();
            it.advance(n-1);
            it.getNode()->next = tail;
        }
        n++;
    }
    void addToHead(Iterator<T> pos) {
        head = new Node<T>(*pos, head);
        n++;
    }
    void push_after(Iterator<T> pos, Iterator<T> Elem) {
        Node<T>* elem = new Node<T>(*Elem, NULL);
        Node<T>* nex = pos.getNode()->next;
        pos.getNode()->next = elem;
        elem->next = nex;
        n++;
    }
    void addGroup(Iterator<T> pos, Iterator<T> start, Iterator<T> finish) {
        while (start != finish) {
            push_after(pos, start);
            ++start;
            ++pos;
            n++;
        }
        push_after(pos, start);
        n++;
    }
    void del(Iterator<T>& pos) {
        Node<T>* temp = pos.getNode();
        ++pos;
        if (temp == head) {
            head = head->next;
            temp->next = NULL;
        }
        else {
            Node<T>* elem = head;
            while (elem->next != temp)
                elem = elem->next;
            elem->next = elem->next->next;
            temp->next = NULL;
        }
        delete temp;
    }
    void delGroup(Iterator<T> start, Iterator<T> finish) {
        while (start != finish)
            del(start);
        del(start);
    }
    void editGroup(Iterator<T> start1, Iterator<T> finish1, Iterator<T> start2, Iterator<T> finish2) {
        Iterator<T> temp = begin();
        if (start1 == temp) {
            delGroup(start1, finish1);
            addToHead(start2);
            start1 = begin();
            ++start2;
            addGroup(start1, start2, finish2);
        }
        else {
            while (temp.getNode()->next != start1.getNode())
                ++temp;
            delGroup(start1, finish1);
            addGroup(temp, start2, finish2);
        }
    }
    Iterator<T> search(T value, Iterator<T> start, Iterator<T> finish) {
        Iterator<T> it = start;
        while (it != finish) {
            if (*it == value)
                return it;
            ++it;
        }
        if (it != end() && *it == value)
            return it;
        else
            return end();
    }
    Iterator<T> searchGroup(Iterator<T> start, Iterator<T> finish) {
        Iterator<T> it1 = begin();
        Iterator<T> it2 = begin();
        Iterator<T> it3 = begin();
        Iterator<T> it4 = start;
        Iterator<T> res = begin();
        it2.advance(n - 1);
        while (it1 != end()) {
            it3 = search(*start, it1, it2);
            res = it3;
            if (it3 == end())
                return end();
            else {
                while (it4 != finish && *it3 == *it4) {
                    ++it3;
                    ++it4;
                }
                if (it4 == finish && *it3 == *it4)
                    return res;
                else {
                    ++it3;
                    it1 = it3;
                }
            }
        }
        return res;
    }
    void combine(List<T> list1, List<T> list2) {
        Iterator<T> it = list1.begin();
        while (it != list1.end()) {
            if (search(*it, begin(), end()) == end())
                push_back(*it);
            ++it;
        }
        it = list2.begin();
        while (it != list2.end()) {
            if (search(*it, begin(), end()) == end())
                push_back(*it);
            ++it;
        }
    }
    void intersection(List<T> list1, List<T> list2) {
        Iterator<T> it = list1.begin();
        while (it != list1.end()) {
            if (search(*it, list2.begin(), list2.end()) != list2.end() && search(*it, begin(), end()) == end())
                push_back(*it);
            ++it;
        }
    }
    std::string print() {
        std::string res = "";
        Iterator<T> it(begin());
        while (it != end()) {
            res += std::to_string(*it) + " ";
            ++it;
        }
        return res;
    }
    int size() {
        return n;
    }
};


#endif /* List_hpp */
