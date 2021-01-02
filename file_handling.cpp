#include<iostream>
#include<fstream>
using namespace std;

int main() {

    char arr[100];
    cout << "enter your name and age" <<endl;
    cin.getline(arr,100);

    ofstream myfile("xyz.txt");
    myfile << arr;
    myfile.close();
    cout << "file write operation performed successfully" <<endl <<endl;

    return 0;
}