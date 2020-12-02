#include<iostream>
using namespace std;

int main() {

    //Program to display multiplication table upto 10.

    int n;

    cout << "enter a positive number: ";

    cin >> n;

    for(int i=1; i <= 10; i++) {
        cout << n << " * " << i << " = " << n*i << "\n" ;
    }

    return 0;
}