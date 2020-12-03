#include<iostream>
using namespace std;

int main() {

    // skip numbers that are divisible by 3 between 1 to 100

    for(int i=1; i < 100; i++) {
        if (i%3==0) {
            continue;
        } cout << i << " ";
    }

    return 0;
}