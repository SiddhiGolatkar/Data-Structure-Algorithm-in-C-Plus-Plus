#include<iostream>
using namespace std;

int main() {

    // write a program to print "I am a Programmer" until user enters x.
    // Exit the while loop if user enters anything other than x.

    char myChar;
    cout << "enter a character: ";
    cin >> myChar;

    while(myChar=='x') {
        cout << "I am a Programmer\n" << "enter a Character: ";
        cin >> myChar;
    }

    return 0;
}