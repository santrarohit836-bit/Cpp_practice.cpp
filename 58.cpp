// 58. Program to dynamically allocate memory in constructor.

#include <iostream>
using namespace std;

class Demo {
    int *p;
public:
    Demo() {
        p = new int;
        *p = 10;
    }

    void show() {
        cout << *p;
    }

    ~Demo() {
        delete p;
    }
};

int main() {
    Demo d;
    d.show();
    return 0;
}

/*
Output:
10
*/
