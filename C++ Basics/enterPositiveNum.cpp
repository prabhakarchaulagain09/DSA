// WAP to enter a program that takes a positive number as input and 

#include<iostream>
using namespace std;

int main(){

    int num;
    cout << "Enter a positive number: ";
    cin >> num;

    if (num < 0){
        cout << "You have entered a negative number. Please enter a positive number." << endl;
    }
    else{
        cout << "You have entered a positive number." << endl;
    }

return 0;

}