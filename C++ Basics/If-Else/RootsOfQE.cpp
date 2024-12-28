/* Write a program to find the nature of the roots of a quadratic equation ( ax^2 + bx + c = 0 ).  
   Use the discriminant ( D = b^2 - 4ac ) to determine:
   - ( D > 0 ): Real and distinct roots
   - ( D == 0 ): Real and equal roots
   - ( D < 0 ): Imaginary roots
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, D, root1, root2;

    // Input coefficients
    cout << "Enter coefficients a, b, and c: ";
    cin >> a >> b >> c;

    // Calculating the discriminant
    D = b * b - 4 * a * c;

    // Determining the nature of the roots
    if (D > 0) {
        cout << "The roots are real and distinct." << endl;
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    } else if (D == 0) {
        cout << "The roots are real and equal." << endl;
        root1 = root2 = -b / (2 * a);
        cout << "Root = " << root1 << endl;
    } else {
        cout << "The roots are imaginary." << endl;
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-D) / (2 * a);
        cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0;
}
