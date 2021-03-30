#include <iostream>
#include "LL.h"

using std::cout, std::endl, std::cin;

int main() {
    List A;
    A.pushback(3);
    A.pushback(10);
    A.pushback(30);
    A.print();

    List B;
    B.pushback(-13);
    B.pushback(-4);
    B.pushback(0);
    B.pushback(16);
    B.pushback(45);
    B.print();

    List C;
    C.pushback(-13);
    C.pushback(20);
    C.pushback(45);
    C.pushback(69);
    C.pushback(93);
    C.pushback(101);
    C.pushback(321);
    C.pushback(420);
    C.pushback(833);
    C.pushback(986);
    C.print();

    int a; cin >> a;
    int b; cin >> b;
    int c; cin >> c;

    cout << A.search(a) << endl;
    cout << B.search(b) << endl;
    cout << C.search(c) << endl;
}