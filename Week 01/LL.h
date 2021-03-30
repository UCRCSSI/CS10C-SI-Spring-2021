#ifndef CODE_LL_H
#define CODE_LL_H

#include <iostream>

using std::cout;
using std::endl;

class Node {
private:
    int num;
    Node* next;
public:
    Node(int num) : num(num), next(nullptr) { }
    int getNum() const;    // Implement This
    friend class List;
};

class List {
private:
    Node* head;
    Node* tail;
    void print_(Node*) const; // Implement This (Use Recursion!)
public:
    List() : head(nullptr), tail(nullptr) { }
    void print() const { print_(head); cout << endl; }
    void pushback(int); // Implement This
    bool search(int);   // Implement This Using Binary Search
};


#endif //CODE_LL_H
