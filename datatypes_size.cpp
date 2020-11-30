#include<iostream>
using namespace std;

int main(){

    int a; //declaration
    a= 12; //initialization

    cout<<"size of int "<<sizeof(a)<<endl;

    float b;
    b = 10.5;

    cout<<"size of float "<<sizeof(b)<<endl;

    char c;

    cout<<"size of char "<<sizeof(c)<<endl;

    bool d;
    cout<<"size of bool "<<sizeof(d)<<endl;

    double e;
    e = 10.123456789123456789;  // upto 15 decimal digits

    cout<<"size of double "<<sizeof(e)<<endl;

    float f;
    f = 10.1234567;

    cout<<"size of float upto 7 decimals "<<sizeof(f)<<endl;

    short int si;
    long int li;

    cout<<"size of shortint "<<sizeof(si)<<endl;
    cout<<"size of longint "<<sizeof(li)<<endl; 

    return 0;
}