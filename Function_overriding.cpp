#include<iostream>
using namespace std;

class animal{
    public:
        void makeSound()
        {
            cout << "Animal sound";
        }
};

class Dog : public animal {
    public:
        void makeSound()
        {
            cout << "dogs bark";
        }
};

class cat : public animal {
    public:
        void makeSound()
        {
            cout << "cats meow";
        }
};

int main() {

    animal a1;
    a1.makeSound();
    cout <<endl;

    Dog d1;
    d1.makeSound();
    cout <<endl;

    cat c1;
    c1.makeSound();
    cout <<endl;

    return 0;
}