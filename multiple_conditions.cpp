#include<iostream>
using namespace std;

int main() {

//else if To specify multiple if conditions, we first use if and then the consecutive statements use else if.

    int x,y;
    cin >> x >> y;

    if (x == y) {
        cout << "Both the numbers are equal";
    }
    else if (x > y) {
        cout << "X is greater than Y";
    } 
    else {
        cout << "Y is greater than X";
    }

}

