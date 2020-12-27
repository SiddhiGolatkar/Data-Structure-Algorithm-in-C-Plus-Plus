#include<iostream>
using namespace std;

int main() {

/* write a program to check if entered year is a leap year or not
1. every leap year is always divisible by 4
2. if year divisible by 100 and 400 both 
3. if year not divisible by 100 but is divisible by 4 then leap year.
*/

    int year;
    cout << "enter year to check if its leap year or not: ";
    cin >> year;

    if (year%4==0) {
        if (year%100==0) {
            if (year%400==0) {
                cout << "Leap year";
            }
            else {
                cout << "Not a leap year";
            }
        }
        else {
            cout << "Leap year";
        }
    }

    else {
        cout << "Not a leap year";
    }

    return 0;
}