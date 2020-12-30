#include<iostream>
using namespace std;

int maximum(int x,int y); // forward declaration

int main() {

    int a,b;
    cout << "enter 2 numbers to find the greatest: " <<endl;
    cin >> a >> b;

    int c = maximum(a,b); // function call
    cout << "Greatest value is: " << c <<endl;

    return 0;
}

int maximum(int x,int y)
{
    if (x>y) 
    return x;
    else
    return y;
}