#include<iostream>
using namespace std;

template <typename T, typename U>

class weight {
    private:
        T kg;
        U grams;
    
    public:
        void setdata(T x, U y){
            kg = x;
            grams = y;
        }
    
        T getkgdata() {
            return kg;
        }

        U getgramdata() {
            return grams;
        }
};

int main() {

    weight <int, double> obj1;
    obj1.setdata(5, 0.53);
    cout << "value of kg is: "<< obj1.getkgdata() <<endl;
    cout << "value of gm is: "<< obj1.getgramdata() <<endl;

    return 0;
}