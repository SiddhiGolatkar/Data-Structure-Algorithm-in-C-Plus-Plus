#include<iostream>
#include<fstream>
using namespace std;

int main() {

    char arr[100];
    cout << "enter about you" <<endl;
    cin.getline(arr,100);

    // open and edit file

    ofstream myfile("xyz.txt", ios::app);
    myfile << arr <<endl;
    myfile.close();
    cout <<endl <<"file write operation performed successfully" <<endl;

    // read file

    cout <<endl <<"Reading from file operation started" <<endl;
    char arr1[100];

    ifstream obj("xyz.txt");
    obj.getline(arr1,100);

    cout << "array content: " << arr1 <<endl;
    cout <<endl << "file read operation completed" <<endl;

    obj.close();    

    return 0;
}