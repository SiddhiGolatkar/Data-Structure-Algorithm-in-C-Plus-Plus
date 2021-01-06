#include<iostream>
using namespace std;

class shape {
    protected:
        int width;
        int height;
    public:
        void setWidth(int w) {
            width = w;
        }
        void setHeight(int h) {
            height = h;
        }
};

// Derived class

class Rectangle: public shape{

    public:
        int getArea() {
            return (width * height);
        }
};

int main() {

    Rectangle Rect;

    Rect.setWidth(5);
    Rect.setHeight(7);

    // print the area of the object

    cout << "total area: " << Rect.getArea() <<endl;

    return 0;
}