#include<iostream>
#include<fstream>
using namespace std;

int main() {

    char arr[100];
    cout << "Reading from file operation started" <<endl <<endl;
    ifstream obj("xyz.txt");
    obj.getline(arr,100);
    cout << "array content: " << arr <<endl <<endl;
    cout << "file read operation completed" <<endl;
    obj.close();

    return 0;
}