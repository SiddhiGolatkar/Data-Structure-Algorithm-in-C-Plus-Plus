#include<iostream>
using namespace std;

int main() {

    cout << "Before swapping: ";

    int x= 5;
    int y= 6;
    cout << "x = " << x << " and y = " << y << endl;

    cout << "After swapping: ";

    x = x+y; // 11
    y = x-y; // 11-6 = 5
    x = x-y; // 11-5 = 6

    cout << "x = " << x << " and y = " << y;

    return 0;
}