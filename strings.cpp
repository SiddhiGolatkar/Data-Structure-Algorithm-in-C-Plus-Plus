#include<iostream>
#include<cstring>
using namespace std;

int main() {

    // c-style strings

    char str1[] = " Siddhi";

    char str2[4] = "c++";

    char str3[] = {'c', '+', '+'};

    char str4[4] = {'c', '+', '+', '\0'};

    cout << "name is :" << str1 <<endl;
    cout << str2 <<endl;
    cout << str3 <<endl;
    cout << str4 <<endl;

    // c++ string class
    cout << "c++ string class" <<endl;

    string name = "Siddhi Golatkar";
    cout << "name is: " << name <<endl;
    cout << "string length is: " << name.length() <<endl;

    return 0;
}