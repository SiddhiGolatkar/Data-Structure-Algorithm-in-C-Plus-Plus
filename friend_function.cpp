#include<iostream>
using namespace std;

class Distance {

    private:
        int meters;
    public:
        Distance() {
            meters = 0;
        }
        void displayData() {
            cout << "Meters value: " << meters;
        }

        // prototype
        friend void addvalue(Distance &d);
};

void addvalue(Distance &d) 
{
    d.meters = d.meters + 5;
}

int main() {

    Distance d1;
    d1.displayData();

    cout << endl;

    // the friend function call
    addvalue(d1); // pass by reference

    d1.displayData();

    cout << endl;

    return 0;
}