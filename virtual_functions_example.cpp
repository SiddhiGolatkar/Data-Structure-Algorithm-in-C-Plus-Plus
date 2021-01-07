#include<iostream>
using namespace std;

// base class
class Animal {
    public:
        virtual void eat(){
            cout << "eating food";
        }       
};

// derived 1
class cat : public Animal {
    public:
        void eat(){
            cout << "cat food";
        }
};

// derived 2
class dog : public Animal {
    public:
        void eat(){
            cout << "dog food";
        }
};

void function1(Animal *xyz)
{
    xyz->eat();
};

int main() {

    Animal *ptr;

    cat catobj;
    dog dogobj;

    ptr = &catobj;

    function1(ptr);

    cout <<endl;

    ptr = &dogobj;

    function1(ptr);

    cout <<endl;

    return 0;
}