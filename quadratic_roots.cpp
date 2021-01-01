#include<iostream>
#include<cmath>
using namespace std;

int main() {

    float a, b, c, discriminant, realPart, imaginaryPart;
    int x1, x2;

    cout << "Enter coefficients a, b and c: " << endl;
    cin >> a >> b >> c;

    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);

        // roots are real and different

        cout << x1 << " " << x2;
    }

    else if(discriminant == 0) {

        x1 = -b / (2*a);
        x2 = -b / (2*a);

        // roots are real and same (x1 = x2)

        cout << x1 << " " << x2; 
    }

    else {
        realPart = -b / (2*a);
        imaginaryPart = sqrt(-discriminant) / (2*a);

        // roots are complex and different

        cout << "imaginary";
    }

    return 0;
}