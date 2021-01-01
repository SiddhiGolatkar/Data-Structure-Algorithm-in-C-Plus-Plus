#include<iostream>
using namespace std;

int main() {

// Convert temperature from Celsius to Fahrenheit

    float cel, frh;

    cout << "Convert temperature in Celsius to Fahrenheit " <<endl;
    cout << "Input the temperature in Fahrenheit: " <<endl;

    cin >> frh;

    cel = 5 * (frh-32) / 9;

    cout << "The temperature in Fahrenheit : " << frh << endl;
    cout << "The temperature in Celsius    : " << cel << endl;

    return 0;
}