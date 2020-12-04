#include<iostream>
using namespace std;

int main() {

    char button;

    cout << "Enter a character: ";

    cin >> button;

    if (button=='a')
    {
    cout << "Hello";
        }
    else if (button=='b') 
    {
        cout<< "Namaste";
    }
    else if (button=='c') 
    {
        cout << "Salut";
    }
    else if (button=='d')
    {
        cout << "Hola";
    }
    else if(button=='e')
    {
        cout << "Ciao";
    }
    else {
        cout << "I am still learning more";
    }
    return 0;
}