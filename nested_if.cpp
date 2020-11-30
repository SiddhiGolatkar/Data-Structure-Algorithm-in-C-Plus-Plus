#include<iostream>
using namespace std;

int main() {

    //To specify conditions within conditions we make the use of nested ifs.

    int x, y;
    cin >> x >> y;

    if (x == y) {
        cout << "Both the numbers are equal"; 
    } 
    else {
        if (x > y) {
            cout << "X is greater than Y";
        }
        else {
            cout << "Y is greater than X";
        }
    }
    return 0;
}