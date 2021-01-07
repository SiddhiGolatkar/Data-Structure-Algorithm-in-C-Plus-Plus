#include<iostream>
using namespace std;

class base{
    protected:
        int val;
};

class derived1 : virtual public base{
    public:
        derived1()
        {
            val=1;
        }
        void getvalue() {
            cout << "derived 1 value of datamember is: " <<val;
        }
};

class derived2 : virtual public base{
    public:
        derived2()
        {
            val=2;
        }
        void getvalue() {
            cout << "derived 2 value of datamember is: " <<val;
        }
};

class derived3 : public derived1, public derived2{
    public:
        void getvalue()
        {
            cout <<endl << "int value is: ";
            derived1 ::getvalue();
            cout <<endl;
        }
};

int main() {

    derived3 obj;
    obj.getvalue();

    return 0;
}