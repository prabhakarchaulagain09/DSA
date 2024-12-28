// Find the count of an element x in a given array

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector <int> v(6);
    cout << "Enter six elements for vector: ";
    for(int i=0; i<v.size(); i++){
    cin >> v[i];
    }
    cout << "Enter x: ";
    int x;
    cin>>x;

    int count =0;
    for(int i=0; i<v.size(); i++){
        if(v[i]==x){
            count++;
        }
    }
    cout << "Count: " << count << endl;

    return 0;
}