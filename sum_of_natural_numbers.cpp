#include<iostream>
using namespace std;

int main() {

    //  find sum of natural numbers till n
    
    int n;

    cin >> n;

    int sum = 0;

    for (int counter=1; counter <= n; counter++) {
        sum = sum+counter;
    }

    cout << sum;

    return 0;
}