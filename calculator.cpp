#include<iostream>
using namespace std;

int main() {

    // program to write a simple calculator.

    float n1, n2;

    cout << "Input 2 numbers: ";

    cin >> n1 >> n2;

    char op;
    cout << "Input an operator: ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << n1 + n2;
        break;
    case '-':
        cout << n1 - n2;
        break;
    case '*':
        cout << n1 * n2;
        break;
    case '/':
        cout << n1/n2;
        break;

    default:
        cout << "operator not found";
        break;
    }

    return 0;
}