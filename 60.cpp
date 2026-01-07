// 60. Program to initialize static data members.

#include <iostream>
using namespace std;

class Sample {
public:
    static int count;
};

int Sample::count = 5;

int main() {
    cout << Sample::count;
    return 0;
}

/*
Output:
5
*/
