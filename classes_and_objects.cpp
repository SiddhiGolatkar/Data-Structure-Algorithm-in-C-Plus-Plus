#include<iostream>
#include<string>
using namespace std;

class cars {

    private:
    // member variables

    string company_name;
    string model_name;
    string fuel_type;
    float mileage;
    long long price;

    public:
    // memeber functions

        void setData(string cname, string mname, string ftype, float m, double p)
        {
            company_name = cname;
            model_name = mname;
            fuel_type = ftype;
            mileage = m;
            price = p;
        }

        void displayData()
        {
            cout << endl << "car properties" <<endl;
            cout << "car company name: " << company_name <<endl;
            cout << "car company model: " << model_name <<endl;
            cout << "car fuel type: " << fuel_type <<endl;
            cout << "car mileage: " << mileage << endl;
            cout << "car price: " << price <<endl;
        }
};
  
int main() {

    cars car1, car2, car3;

    car1.setData("Toyota", "altis", "petrol", 15.5, 500000);
    car1.displayData();

    car2.setData("Maruti suzuki", "A star", "petrol", 14, 400000);
    car2.displayData();

    car3.setData("Toyota", "Fortuner", "Diesel", 15, 2500000);
    car3.displayData();

    return 0;
}