#include<iostream>
#include<cmath>
using namespace std;

int main() {

    int n;
    cout << "enter a number: ";
    cin >> n;

    bool flag=0;

    for(int i=2; i<=sqrt(n); i++) {

        if(n%i==0) {
            cout << "Non Prime";
            flag=1;
            break;
        }
    
    }

    if (flag==0) {
        cout << "Prime";
    }

    return 0;
}