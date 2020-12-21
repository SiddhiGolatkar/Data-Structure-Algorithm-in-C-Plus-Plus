#include<iostream>
#include<math.h>
using namespace std;


bool is_prime(int num){
    for(int i=2; i<=sqrt(num); i++) {
        if (num%i==0) {
            return false;
        }
    }
    return true;
}

int main() {

    int a,b;
    cout << "enter start number: ";
    cin >> a;
    cout << "enter end number: ";
    cin >> b;

    for(int i=a; i<=b; i++) {
        if(is_prime(i)) {
            cout << i << endl;
        }
    }
    return 0;
}