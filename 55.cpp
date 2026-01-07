// 55. Program to demonstrate constructor overloading.

#include <iostream>
using namespace std;

class Sample {
public:
    int x;

    Sample() {
        x = 10;
    }

    Sample(int a) {
        x = a;
    }

    Sample(int a, int b) {
        x = a + b;
    }
};

int main() {
    Sample s1;
    Sample s2(20);
    Sample s3(5, 7);

    cout << s1.x << " " << s2.x << " " << s3.x;
    return 0;
}

/*
Output:
10 20 12
*/
