// Calculate the sum of all the elements in the given array.

#include<iostream>
using namespace std;

int main(){
    
    int array[5];

    cout << "Enter a five digit array: ";
    for(int i=0; i<5; i++){
        cin >> array[i];
    }

    int temp = 0;
    
    for(int i=0; i<5; i++){

        temp += array[i];

    }
    
    cout << temp;
    
    return 0;
}