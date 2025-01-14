#include <iostream>
using namespace std;

int main() {

    int *pNum = NULL;
    pNum = new int;
    
    *pNum = 21;
    
    cout << "address: " << pNum << endl;
    cout << "Value: " << *pNum << endl;
    
    delete pNum;

    return 0;
}