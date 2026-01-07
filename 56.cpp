// 56. Program with destructor showing object destruction.

#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor Called\n";
    }

    ~Demo() {
        cout << "Destructor Called";
    }
};

int main() {
    Demo d;
    return 0;
}

/*
Output:
Constructor Called
Destructor Called
*/
