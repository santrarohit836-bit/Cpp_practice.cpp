// 57. Program to show order of constructor execution.

#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "Class A Constructor\n";
    }
};

class B : public A {
public:
    B() {
        cout << "Class B Constructor";
    }
};

int main() {
    B obj;
    return 0;
}

/*
Output:
Class A Constructor
Class B Constructor
*/
