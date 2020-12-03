
#include<iostream>
using namespace std;

int main() {

    // Write a program to print all odd numbers till n.

    int n;

    cout << "Enter a number: ";

    cin >> n;

    for(int i=1; i<=n; i++) {
        if (i%2==0) {
            continue;
        } 
        cout << i <<endl;
    }

    return 0;
}