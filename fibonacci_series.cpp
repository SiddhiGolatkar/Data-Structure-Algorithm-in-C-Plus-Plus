#include<iostream>
using namespace std;

int main() {

// write a program to print fibonacci series.
// eg. 0 1 1 2 3 5 8 13

    int n;
    cout << "enter the number of terms to be printed in the fibonacci series: ";
    cin >> n;

    int a,b,c;
    a = 0;
    b = 1;

    for(int i=0; i<n; i++) {
        cout << a << endl;
        c = a+b;
        a = b;
        b = c;
    }

    return 0;
}