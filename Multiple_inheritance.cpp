#include<iostream>
using namespace std;

// base class 1
class a{
    public:
        void printmessage()
        {
            cout << "class A print message function" <<endl;
        }
};

// base class 2
class b{
    public:
        void printmessage()
        {
            cout << "class B print message function" <<endl;
        }
};

// Dervied class
class ab: public a, public b {
    public:
        void printmessage()
        {
            cout << "class ab print message function" <<endl;
        }
};

// Derived class
class AB : public a, public b {
    public:
        void printmessage()
        {
            a ::printmessage();
            b ::printmessage();
            cout << "class ab print message" <<endl;
        }
};

int main() {

    AB obj;
    obj.printmessage();

    return 0;
}