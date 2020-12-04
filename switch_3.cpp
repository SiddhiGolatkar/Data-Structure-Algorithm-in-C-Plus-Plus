#include<iostream>
using namespace std;

int main() {

    // Write a program to find whether an alphabet is a vowel or a consonant.

    char c;
    cout << "Enter an alphabet: ";
    cin >> c;

    switch (c)
    {
    case 'a':
        cout << "It is a vowel";
        break;
    case 'e':
        cout << "It is a vowel";
        break;
    case 'i':
        cout << "It is a vowel";
        break;
    case 'o':
        cout << "It is a vowel";
        break;
    case 'u':
        cout << "It is a vowel";
        break;

    default:
        cout << "It is a consonant";
        break;
    }

    return 0;
}