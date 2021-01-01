#include<iostream>
using namespace std;

// also known as passByPointers

void passByAddress(int *x, int *y)
{
    int z = *x;
    *x = *y;
    *y = z;
}

int main() {

    int a=5, b=6;

    cout << "Before Swapping " << endl << "a: " << a << endl << "b: " << b << endl << endl;
    
    // call function
    passByAddress(&a,&b);

    cout << "After Swapping " << endl << "a: " << a << endl << "b: " << b << endl << endl;

    return 0;
}