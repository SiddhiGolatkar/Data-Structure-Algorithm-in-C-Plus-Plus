#include<iostream>
using namespace std;

class mybase{
    public:
        void show()
        {
            cout <<"base class show function called" <<endl;
        }

        virtual void print()
        {
            cout <<"base class print function called" <<endl;
        }
};

class myderived : public mybase {
    void show() {
        cout << "Derived class show function called" <<endl;
    }
    void print() {
        cout << "Derived class print function called" <<endl;
    }
};

int main() {

    mybase *baseptr;
    myderived derivedobj;

    baseptr = &derivedobj;

    // runtime polymorphism
    baseptr->print();
    baseptr->show();

    return 0;
}