// 53. Program with multiple constructors.

#include <iostream>
using namespace std;

class Demo {
public:
    int x;

    Demo() {
        x = 5;
    }

    Demo(int a) {
        x = a;
    }
};

int main() {
    Demo d1;
    Demo d2(20);

    cout << d1.x << " " << d2.x;
    return 0;
}

/*
Output:
5 20
*/
