// Finding the hypotenuse given base and altitude.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    double altitude, base, hypotenuse, altitude2, base2, hypotenuse2;
    
    cout << "Enter the altitude: ";
    cin >> altitude;
    
    cout << "Enter the base: ";
    cin >> base;
    
    
//    altitude2 = pow(p,2);
//    base2 = pow(b, 2);
//    hypotenuse = altitude2 + base2;
//    hypotenuse2 = sqrt(hypotenuse);

    hypotenuse = sqrt(pow(altitude, 2) + pow(base, 2));
    
    
    cout << "The hypotenius is " << hypotenuse << endl;

    return 0;
}