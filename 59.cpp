// 59. Program to initialize const data members in constructor.

#include <iostream>
using namespace std;

class Demo {
    const int x;
public:
    Demo(int a) : x(a) {}

    void show() {
        cout << x;
    }
};

int main() {
    Demo d(25);
    d.show();
    return 0;
}

/*
Output:
25
*/
