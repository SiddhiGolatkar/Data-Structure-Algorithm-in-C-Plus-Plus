#include<iostream>
using namespace std;

// create a structure named - Person to store his name, age and salary.

struct Person{
    char name[100];
    int age;
    double salary;
};

int main() {

    Person p1;
    cout << "Person details" <<endl << "enter person name: "<<endl;
    cin.getline(p1.name, 100);
    cout << "enter age" << endl;
    cin >> p1.age;
    cout << endl;
    cout << "enter salary" <<endl;
    cin >> p1.salary;
    cout << endl << "Person details are as follows:" <<endl;

    cout << "person name: " << p1.name <<endl;
    cout << "person age: " << p1.age <<endl;
    cout << "person salary: " << p1.salary <<endl;

    return 0;
}