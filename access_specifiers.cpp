#include<iostream>
using namespace std;

class mybaseclass{

    public:
    int x;

    mybaseclass() {
        x=5;
        y=5;
        z=5;
    }

    void printprotecteddata() {
        cout << "y: " << y <<endl;
    }

    protected:
    int y;
    private:
    int z;
};

class myderviedclass : public mybaseclass{
    // public int x
    // protected int y
};

class myderivedclass2 : protected mybaseclass{
    // protected int x
    // protected int y
};

class myderivedclass3 : private mybaseclass{
    // private int x
    // private int y
};

void myoutsidefunction(mybaseclass obj) {
    obj.printprotecteddata();
    //cout << "z: " << obj.z <<endl;
}

int main() {

    mybaseclass obj1;

    myderviedclass obj2;

    myderivedclass2 obj3;

    cout << "x: " <<obj2.x;
    cout <<endl;
    myoutsidefunction(obj1);

    return 0;
}