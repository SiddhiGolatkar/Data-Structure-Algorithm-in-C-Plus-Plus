#include<iostream>
using namespace std;

int main() {

// write a program to check if a number is palindrome or not 
// e.g. 121 is a palindrome but 123 is not

    cout << "enter a number to check if its palindrome or not: ";

    int n, num, digit, rev=0;
    cin >> num;

    n = num;
    while(num!=0) {
        digit = num%10;
        rev = (rev*10) + digit;
        num = num/10;
    }

    if(n==rev) {
        cout << "Palindrome Number";
    }
    else {
        cout << "Not Palindrome";
    }

    return 0;
}