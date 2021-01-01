#include<iostream>
using namespace std;

int main() {

// Convert temperature in Celsius to Fahrenheit

    float frh, cel;
    cout << "Convert temperature in Celsius to Fahrenheit: \n";
    cout << "input the temperature in celcius: "<< endl;

    cin >> cel;

    frh = (9*cel)/5 + 32;

    cout << "The temperature in celcius   : " << cel <<endl;
    cout << "the temperature in Fahrenheit: " << frh <<endl;
    
    return 0;
}