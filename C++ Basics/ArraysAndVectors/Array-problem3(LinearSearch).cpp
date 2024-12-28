// Search if a given element is present in the array or not. If it is not present return -1 else return the index.

#include<iostream>
using namespace std;

int main(){
    
    int array[] = {1, 5, 7, 4, 9, 10};
    int size = sizeof(array)/sizeof(array[1]);
    
    int element = 9;
    
    for (int i=0; i< size; i++){
        if(element == array[i]){
            cout << "The given element is present in " << i << " index." << endl;
            return 0;
        }
    }
    
    cout << "-1";
    
    return 0;
}