#include<iostream>
using namespace std;

class shape{
    public:
        virtual void getarea() = 0; // pure virtual function
};

class circle : public shape{
    public:
        void getarea()
        {
            cout << "enter circle radius" << endl;
            int r;
            cin >> r;
            cout << "area of circle is: " << (3.14 * r * r) <<endl;
        }
};

class rectangle : public shape {
    public:
        void getarea()
        {
            cout << "enter length and breadth" << endl;
            int length, breadth;
            cin >> length >> breadth;
            cout << "area of rectangle is: " << (length * breadth) <<endl;  
        }
};

int main() {

    circle c1;
    c1.getarea();

    cout <<endl;

    rectangle r1;
    r1.getarea();

    cout <<endl;

    return 0;
}