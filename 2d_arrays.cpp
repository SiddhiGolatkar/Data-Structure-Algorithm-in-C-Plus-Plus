#include<iostream>
using namespace std;

int main() {

    // 2-D array initialization, take input, display output, addition, subtraction

    int myarray[5][5]; // declaration
    int myarray1[2][2] = {1,2,3,4}; // declaration with intialization 
    int myarray2[3][3] = {{1,1,1}, {2,2,2}, {3,3,3}};

    int A[2][2], B[2][2], addition[2][2], subtraction[2][2];

    cout << "enter values of 2-D array A: " << endl;

    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            cin >> A[i][j];       
        }
    }

    cout << "enter values of 2-D array B: " << endl;

    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            cin >> B[i][j];       
        }
    }

    for(int i=0; i<2; i++) {
        for(int j=0;j<2; j++) {
            addition[i][j] = A[i][j] + B[i][j];
    }
        cout << endl;
    }

    for(int i=0; i<2; i++) {
        for(int j=0;j<2; j++) {
            subtraction[i][j] = A[i][j] - B[i][j];
    }
        cout << endl;
    }

    cout << "values of addition array are: " << endl;

    for(int i=0; i<2; i++) {
        for(int j=0;j<2; j++) {
            cout << addition[i][j] << " ";
    }
        cout << endl;
    }

    cout << endl << "values of subtraction array are: " << endl;

    for(int i=0; i<2; i++) {
        for(int j=0;j<2; j++) {
            cout << subtraction[i][j] << " ";
    }
        cout << endl;
    }
    return 0;
}