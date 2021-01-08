#include<iostream>
#include<string>
using namespace std;

/* hybrid inheritance is the combination of multi-level inheritance 
and multiple inheritance */

class person
{
    protected:
        int income;
};

class Tax_on_income : public person
{
    protected:
        int incometax;
    public:
        void getincome(int a)
        {
            income = a;
            cout <<endl << "income = " << income <<endl;
        }
        void calculateTax(){
            incometax = 0.1 * income;
            cout <<endl << "income tax = " << incometax <<endl;
        }
};

class cartax : public person
{
    protected:
        int cartax;
    public:
        void getcartax(int a)
        {
            cartax = a;
            cout <<endl << "car tax = " << cartax <<endl;
        }
};

class totalTax : public Tax_on_income, public cartax
{
    int total;
    public:
        void totaltax()
        {
            total = incometax + cartax;

            cout << endl << "Total tax to be paid = " << total <<endl;
        }
};

int main() {

    totalTax obj;
    
    obj.getincome(5000);

    obj.calculateTax();

    obj.getcartax(1000);

    obj.totaltax();

    return 0;
}