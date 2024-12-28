// How to make input using an array

#include <iostream>
using namespace std;

int main(){
    
    char alphabets[5];
    
    cout << "Enter five alphabets : ";
    for(int i=0; i<5; i++){
        cin>>alphabets[i];
    }
    
    cout << "\n\n";
    
    cout << "Entered five alphabets are : ";
    for(int i=0; i<5; i++){
        cout << alphabets[i] << " ";
    }
    
    cout << "\n\n";
    
    
    return 0;
}