#include<iostream>
using namespace std;

void fib(int n) {

    int a = 0;
    int b = 1;
    int nextterm;

    for(int i=1; i<=n; i++) {
        cout << a << endl; 
        nextterm = a + b;
        a = b;
        b = nextterm;
    }
    return;
}

int main() {

    int n;
    cin >> n;

    fib(n);

    return 0;
}