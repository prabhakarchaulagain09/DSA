// How to print using array

#include <iostream>
using namespace std;

int main(){
    
    int array[] = {1,2,3,4,5};
    
    int size = sizeof(array)/sizeof(array[1]);
    
    cout << "The size of array is " << size << "\n "<< endl;
    
    //using for loop
    for(int i=0; i<5; i++){
        cout << i+1 << ". element: " << array[i] << endl;
    }
    
    cout << "\n\n";
    
    //using while loop
    int i = 0;
    while (i < size) {
        cout << i + 1 << ". element: " << array[i] << endl;
        i++;
    }
    
    cout << "\n\n";
    
    //using for else
    for(int ele:array){
        cout << "Element: "<< ele << endl;
    }
    
    cout << "\n\n";
    
    return 0;
}