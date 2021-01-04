#include<iostream>
#include<string>
using namespace std;

class cars
{
private:
    string company_name;
    string model_name;
    string fuel_type;
    float mileage;
    long long price;

public:

    // default constructor

    cars(){
        cout << "Default constructor called" <<endl;
        company_name = "Toyota";
        model_name = "Fortuner";
        fuel_type = "Petrol";
    }

    // member function

    void setData(string cname, string mname, string ftype, float m, long long p)
    {
        company_name = cname;
        model_name = mname;
        fuel_type = ftype;
        mileage = m;
        price = p;
    }

    void displayData()
    {
        cout << endl << "Car Properties" << endl;
        cout << "Car company name - " << company_name <<endl;
        cout << "Car model - " << model_name <<endl;
        cout << "car fuel type - " << fuel_type <<endl;
        cout << "car mileage - " << mileage <<endl;
        cout << "car Price - " << price <<endl;    
    }
};

int main() {

    cars car1, car2, car3, car4;

    // car1.setData("Toyota", "Fortuner", "Petrol", 18, 2700000);
    car1.displayData();
    car2.displayData();
    car3.displayData();
    car4.displayData();

    return 0;
}