#include<iostream>
using namespace std;

int main() {

// write a program to calculate factorial of a number e.g. 5! = 5x4x3x2x1 = 120

    int n, fact;
    cout << "enter a number to calculate its factorial: ";
    cin >> n;
    fact = n;

    while(n>1) {
        n--;
        fact = fact * n;
    }
    
    cout << "\nfactorial value: " << fact;

    return 0;
}