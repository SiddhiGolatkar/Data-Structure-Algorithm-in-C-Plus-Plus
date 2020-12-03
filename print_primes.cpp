#include<iostream>
using namespace std;

int main() {

    // Print all Prime Numbers in a given range

    int a,b;

    cout << "Enter 2 numbers: ";

    cin >> a >> b;

    for(int num=a; num <= b; num++) {
        int i;
        for (i=2; i<num; i++) {
            if (num%i==0) {
                break;
            }
        }
        if (i==num) {
            cout << num << "\n";
        }
    }
    return 0;
}