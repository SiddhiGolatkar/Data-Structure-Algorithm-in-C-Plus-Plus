#include<iostream>
using namespace std;

class weight{
    private:
        int kg;
    public:
    // Default constructor
        weight() {
            kg = 0;
        }
    // Parameterized constructor
        weight(int x) {
            kg = x;
        }
        void printWeight() {
            cout << "weight in kg: " << kg <<endl;
        }

    // increment operator overloading

        weight operator ++()
        {
            weight temp;
            temp.kg = ++kg;
            return temp;
        }

        void operator ++(int)
        {
            kg++;
        }

    // decrement operator overloading
        void operator --()
        {
            --kg;
        }

        void operator --(int)
        {
            kg--;
        }
};

int main() {

    weight obj;

    obj.printWeight();

    ++obj;

    obj.printWeight();

    obj++;

    obj.printWeight();

    obj--;

    obj.printWeight();

    --obj;

    obj.printWeight();

    weight obj1, obj2;

    obj2 = ++obj1;

    obj2.printWeight();

    return 0;
}