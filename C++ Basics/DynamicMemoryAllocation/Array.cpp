#include <iostream>
using namespace std;

int main() {

    char *pArray = NULL;
    int size;
    
    cout << "Enter the number of characters for array: ";
    cin >> size;
    
    pArray = new char[size];
    
    for(int i=0; i<size; i++){
        cout << "Enter grade #" << i+1 << ": ";
        cin >> pArray[i];
    }

    for(int i=0; i < size; i++){
        cout << pArray[i] << " ";
    } 
    
    delete pArray;

    return 0;
}