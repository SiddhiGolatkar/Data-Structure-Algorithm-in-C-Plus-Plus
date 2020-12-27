#include<iostream>
using namespace std;

int main() {

    cout << "Before swapping: ";
    int x= 5;
    int y= 6;

    cout << "x = " << x << " and y = " << y <<endl;

    cout << "After swapping: ";
    int temp = x; // third variable
    x = y;
    y = temp;

    cout << "x = " << x << " and y = " << y;

    return 0;
}