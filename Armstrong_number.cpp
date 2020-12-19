#include<iostream>
#include<math.h>
using namespace std;

int main() {

    int n;
    cout << "enter a number: ";
    cin >> n;

    int sum = 0;
    int originaln= n;
    while(n > 0) {
        int lastdigit = n%10;
        sum = sum + lastdigit * lastdigit * lastdigit ;
        n = n/10;
    }

    if (originaln==sum) {
        cout << "Armstrong number" << endl;
    }
        else
    {
        cout << "Not Armstrong" << endl;
    }
    
    return 0;
}