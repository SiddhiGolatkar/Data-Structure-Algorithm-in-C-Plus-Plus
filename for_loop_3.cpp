#include<iostream>
using namespace std;

int main() {

    // write a program to print multiplication table of any given number.
    
    int n;
    cout << "enter a number: ";
    cin >> n;

    for(int i=1; i<=10; i++) {
        cout << n << " * " << i << " = " << n*i << endl;
    }

    return 0;
}