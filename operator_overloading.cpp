#include<iostream>
using namespace std;

class complex{
    private:
    int real, imaginary;

    public:
    // default constructor
    
    complex() {
        real = 0;
        imaginary = 0;
    }

    // parameterized constructor

    complex(int r, int i){
        real = r;
        imaginary = i;
    }

    void print() {
        cout << real << " + " << imaginary << "i" <<endl;
    }

    // operator overloading

    complex operator +(complex c)
    {
        complex temp;
        temp.real = real + c.real;
        temp.imaginary = imaginary + c.imaginary;
        return temp;
    }
};

int main() {

    complex c1(5,4);
    complex c2(7,2);
    complex c3(1,2);
    complex c4;

    c4 = c1 + c2 + c3;

    c4.print();

    return 0;
}