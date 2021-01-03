#include<iostream>
#include<string>
using namespace std;

/* create a variable of struct type. create a pointer and point to it and use the
pointer to take input and display output. */

struct Person
{
    string name;
    int age;
    double salary;
};

int main() {

    Person p1;

    Person *ptr = &p1;

    cout << "enter details of person like name, age and salary" << endl;
    cin >> ptr->name;
    cin >> ptr->age;
    cin >> ptr->salary;

    cout << endl << "Details of person are as follows: " <<endl;
    cout << "name: " << ptr->name <<endl;
    cout << "age: " << ptr->age <<endl;
    cout << "salary: " << ptr->salary <<endl;

    return 0;
}