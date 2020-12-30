#include<iostream>
using namespace std;

int main() {

    int size;
    int *ptr;
    char *cptr;

    cout << "enter no.of values you want to store (size of array) : " << endl;

    cin >> size;

    ptr = new int[size];

    cout << "enter values: ";

    for(int i=0; i<size; i++) {
        cin >> ptr[i];
    }

    cout << "values in the array are: " << endl;
    for(int i=0; i<size; i++) {
        cout << ptr[i] << " ";
    }

    return 0;
}