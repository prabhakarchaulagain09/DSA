// How to implement loops while using vector

#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<int> v(5);
    
    cout << "Enter five elements : ";
    
    //for loop
    for(int i=0; i<v.size(); i++){
        cin >> v[i];
    }
        for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout <<endl;
    
    //while loop
    int i = 0;
    while(i<v.size()){
        cout << v[i++] << " ";
    }
    cout<<endl;
    
    return 0;
}