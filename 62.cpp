// 62. Program to differentiate local & member variables using this.

#include <iostream>
using namespace std;

class Test {
    int a;
public:
    void set(int a) {
        this->a = a;
    }

    void show() {
        cout << a;
    }
};

int main() {
    Test t;
    t.set(20);
    t.show();
    return 0;
}

/*
Output:
20
*/
