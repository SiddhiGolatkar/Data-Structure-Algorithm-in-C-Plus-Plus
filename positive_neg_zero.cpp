#include<iostream>
using namespace std;

int main() {

    int n;
    cout << "enter a number: ";
    cin >> n;

    if (n < 0) {
        cout << "Negative number";
    }
    else if (n > 0) {
        cout << "Positive number";
    }
    else {
        cout << "Zero";
    }
    
    return 0;
}