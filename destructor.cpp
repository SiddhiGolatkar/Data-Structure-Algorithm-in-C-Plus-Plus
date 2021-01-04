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
    }

    // parameterized constructor

    cars(string cname, string mname, string ftype, float m, long long p) 
    {
        cout << "Parameterized constructor called" <<endl;

        company_name = cname;
        model_name = mname;
        fuel_type = ftype;
        mileage = m;
        price = p;
    }

    // copy constructor

    cars(cars &obj) 
    {
        cout << endl << "Copy constructor called" <<endl;

        company_name = obj.company_name;
        model_name = obj.model_name;
        fuel_type = obj.fuel_type;
        mileage = obj.mileage;
        price = obj.price; 
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

    // destructor
    
    ~cars() 
    {
        cout << "Destructor called" <<endl;
    }
};

int main() {

    cars car1, car2("Toyota","altis", "petrol", 15.5, 400000);

    car1.setData("Maruti suzuki", "a star", "diesel", 12, 500000);
    car1.displayData();

    car2.displayData();

    cars car3 = car1; // copy constructor called
    car3.displayData();

    return 0;
}