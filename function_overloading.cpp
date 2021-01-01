#include<iostream>
using namespace std;

int add(int a, int b) 
{   // 1
    cout << "function 1" <<endl;
    return(a+b);
}

double add(double a, double b) 
{  // 2
    cout << "function 2" <<endl;
    return(a+b);
}

int add(int a, int b, int c) 
{  // 3
    cout << "function 3" <<endl;
    return(a+b+c);
}

double add(int a, double b)
{   // 4
    cout << "function 4" <<endl;
    return(a+b);
}

double add(double a, int b) 
{  // 5
    cout << "function 5" <<endl;
    return(a+b);
}

int main() {

    cout << add(1,2) <<endl;
    cout << add(3.5,4.5) <<endl;
    cout << add(3,4,5) <<endl;
    cout << add(3, 4.5) <<endl;
    cout << add(3.5,4) <<endl;

    return 0;
}