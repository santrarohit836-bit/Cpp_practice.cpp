// 61. Program demonstrating this pointer.

#include <iostream>
using namespace std;

class Demo {
    int x;
public:
    void set(int x) {
        this->x = x;
    }

    void show() {
        cout << x;
    }
};

int main() {
    Demo d;
    d.set(10);
    d.show();
    return 0;
}

/*
Output:
10
*/
