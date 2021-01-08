#include<iostream>
using namespace std;

/* a function that calls itself is called a recursive function and
   the technique is known as recursion

Q. Recursive function to calculate sum of n Natural Numbers */

int sum(int num)
{
    if(num!=0)
        return (num + sum(num-1));
    else
        return num;
}

int main() {

    int n;
    cout << "enter number till which you want the sum of natural numbers to be calculated: ";
    cin >>n;

    int total = sum(n);

    cout << endl << "sum of natural numbersfrom 1 to " << n << " are: " << total <<endl;

    return 0;
}