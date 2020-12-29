#include<iostream>
using namespace std;

int main() {

// Pointers in c++

    int var = 5;

    int *ip;
    double *dp;
    float *fp;
    char *ch;

    ip =&var;

    cout << "Variable value: " << var <<endl;
    cout << "address in pointer: " << ip <<endl;
    cout << "Pointer pointing to value: " << *ip <<endl;

    *ip = 6;
    
    cout << endl; 
    cout << "Variable value: " << var <<endl;
    cout << "address in pointer: " << ip <<endl;
    cout << "Pointer pointing to value: " << *ip <<endl;

    return 0;
}