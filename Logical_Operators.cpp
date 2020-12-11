#include<iostream>
using namespace std;

int main() {

    // write a program to output whether a number is divisible by both 2 & 3 
    // or divisible by only one of them

    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n%2==0 && n%3==0) {
        cout << "Divisible by Both";
    }
    else if (n%2==0) {
        cout << "Divisible by only 2";
    }
    else if (n%3==0) {
        cout << "Divisible by only 3";
    }
    else {
        cout << "Divisible by None";
    }

    return 0;
}