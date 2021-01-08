#include<iostream>
using namespace std;

class myclass{
    private:
        int x;            // non static data member
        static int count; // static data member

    public:

        // default constructor
        myclass()
        {
            count++;
        }

        static int getcount()  // static member function
        {
            return count;
        }
};

// initialization
int myclass::count = 0;

int main() {

    cout << "initial count: " << myclass::getcount() <<endl;

    myclass obj1, obj2; // default constructor is called

    cout << "count after 2 object: " << myclass::getcount() <<endl;

    return 0;
}