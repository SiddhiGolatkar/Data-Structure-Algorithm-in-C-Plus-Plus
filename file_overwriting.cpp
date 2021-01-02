#include<iostream>
#include<fstream>
using namespace std;

int main() {

    char arr[100];
    cout << "enter your profession: " << endl;
    cin.getline(arr,100);

    ofstream myfile("xyz.txt");
    myfile << arr;
    myfile.close();
    cout <<endl << "file write operation performed successfully" <<endl <<endl;

    cout << "reading from file operation started" <<endl;
    char arr1[100];
    ifstream obj("xyz.txt");
    obj.getline(arr1,100);
    cout << "array content: " << arr1 <<endl <<endl;
    cout << "file read/overwrite operation completed" <<endl;
    obj.close();

    return 0;
}