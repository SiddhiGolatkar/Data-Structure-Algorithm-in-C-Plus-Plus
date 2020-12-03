#include<iostream>
using namespace std;

int main() {

    // can go out on odds days untill pocketmoney ends

    int pocketmoney = 3000;

    for(int date =1; date <=30; date++) {

        if (date%2==0) {
            continue;
        }
        if (pocketmoney ==0) {
            break;
        }
        cout << date << " - " << pocketmoney << " Go out today! \n";
        pocketmoney= pocketmoney - 300;

    } 
    return 0;
}