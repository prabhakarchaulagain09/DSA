// Find the maximum value out of all the elements in the array.

#include<iostream>
using namespace std;

int main(){
    
    int array[] = {1, 3, 6, 5,2, 4};
    
    int temp = 0;
    
    int size = sizeof(array)/sizeof(array[1]);
    
    for (int i =0; i<size; i++){
        
        if (array[i] > temp){
            temp = array[i];
        }
        
    }
    cout << "The maximum value in the array is " << temp << endl;
}