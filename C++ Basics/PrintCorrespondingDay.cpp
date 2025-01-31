//WAP to take input 1 to 7 and print the corresponding day of the week using switch case.

#include <iostream>
using namespace std;

int main(){

    int day;

    switch (day)
    {
    case 1:
        cout << "Sunday" << endl;
        break;

    case 2:
        cout << "Monday" << endl;
        break;  
    case 3:
        cout << "Tuesday" << endl;
        break;
    case 4:
        cout << "Weansday" << endl;
        break;
    case 5:
        cout << "Thursday" << endl;
        break;
    case 6:
        cout << "Friday" << endl;
        break;
    case 7:
        cout << "Saturday" << endl;
        break;
    default:
        break;
    }

    return 0;

}