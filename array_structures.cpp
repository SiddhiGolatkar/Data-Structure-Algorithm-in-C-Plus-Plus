#include<iostream>
#include<string>
using namespace std;

/* create an array of structures and accept input and display output structure name
 - person - name - age - salary */

struct Person
{
    string name;
    int age;
    double salary;
};

int main() {

    Person p[3];

    cout << "enter person details like name, age, salary: " <<endl;

    for(int i =0; i<3;i++) {
        cin>>p[i].name;
        cin>>p[i].age;
        cin>>p[i].salary;
    }

    cout << endl << "Details of users: "<<endl;

    for(int i=0; i<3; i++) {
        cout << endl << "details of person " << i+1 <<endl;
        cout << "name: " << p[i].name <<endl;
        cout << "age: " << p[i].age << endl;
        cout << "salary: " << p[i].salary << endl;
    }

    cout<<endl;

    return 0;
}