#include<iostream>
using namespace std;

// Pointer to object and passing object as argument and returning object

class complexNumber
{
private:
    // data members

    int real;
    float imaginary;

public:
    // default constructor
    complexNumber(){}

    // parameterized constructor
    complexNumber(int r, float i) 
    {
        real = r;
        imaginary = i;
    }

    void displayData()
    {
        cout << "complex no is: " << real << " + " << imaginary << "i" <<endl;
    }

    int getrealpart() {
        return real;
    }

    float getimaginarypart() {
        return imaginary;
    }

};

complexNumber add2number(complexNumber n1, complexNumber n2) 
{
    int r;
    float i;
    r = n1.getrealpart() + n2.getrealpart();
    i = n1.getimaginarypart() + n2.getimaginarypart();
    complexNumber temp(r,i);
    return temp;
}
int main() {

    complexNumber comp1(5,4), comp2(2,3), comp3;

    comp1.displayData();
    comp2.displayData();

    cout << endl << "addition of comp1 and comp2" <<endl;

    comp3 = add2number(comp1, comp2);
    comp3.displayData();

    cout <<endl << "pointer to object" <<endl;

    complexNumber *ptr1;
    ptr1 = &comp3;
    ptr1->displayData();

    ptr1 = &comp2;
    ptr1->displayData();

    cout << ptr1 <<endl;

    return 0;
}