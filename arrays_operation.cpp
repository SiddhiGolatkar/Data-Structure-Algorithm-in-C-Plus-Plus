#include<iostream>
using namespace std;

int main() {

/* A = [1,3,5] b = [2,4,6]
    add= [3,7,11]
    sub = [-1,-1,-1]
    mul = [2,12,30]
*/

    int A[3];
    int B[3];

    int add[3], sub[3], mul[3];

    cout << "Enter 3 integers for array A: " << endl;

    for(int i=0; i<3; i++) {
        cin >> A[i];
    }

    cout << "Enter 3 integers for array B: " << endl;

    for(int i=0; i<3; i++) {
        cin >> B[i];
    }
    cout << endl << "Addition of A & B is: " << endl;

    for(int i=0; i<3; i++) {
        add[i]= A[i] + B[i];
        cout << add[i] << " ";
    }

    cout << endl << "\nSubtraction of A & B is: " << endl;

    for(int i=0; i<3; i++) {
        sub[i]= A[i] - B[i];
        cout << sub[i] << " ";
    }

    cout << endl << "\nMultiplication of A & B is: " << endl;

    for(int i=0; i<3; i++) {
        mul[i]= A[i] * B[i];
        cout << mul[i] << " ";
    }

    return 0;
}