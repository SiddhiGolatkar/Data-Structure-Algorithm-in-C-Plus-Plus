#include<iostream>
using namespace std;

template <typename T, typename U>
U add(T x, U y)
{
    return(x+y);
}

int main() {

    cout << "addition of 2 integers: " << add <int, double> (3,4.5) <<endl;

    return 0;
}