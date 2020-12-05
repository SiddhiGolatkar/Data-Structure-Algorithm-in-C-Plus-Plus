#include<iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n > 10) {
        cout << "More than 10";
    }
    else if (n < 10) {
        cout << "Less than 10";
    }
    else {
        cout << "Equal to 10";
    }

    return 0;
}