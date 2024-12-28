// Add and remove elements in a vector

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;

    // Display initial capacity and size
    cout << "The capacity of vector is " << vec.capacity() << endl;
    cout << "The size of vector is " << vec.size() << endl;

    // Add elements to the vector
    vec.push_back(5);
    vec.push_back(10);
    vec.push_back(15);

    // Display capacity and size after adding elements
    cout << "The capacity of vector is " << vec.capacity() << endl;
    cout << "The size of vector is " << vec.size() << endl;

    // Insert operations
    vec.push_back(20);                        // Insert at the tail
    vec.insert(vec.begin() + 2, 25);          // Insert at position 2
    vec.insert(vec.end() - 1, 30);            // Insert before the last element

    // Remove operations
    vec.pop_back();                           // Remove the last element
    vec.erase(vec.end() - 1);                 // Remove the new second-last element
    vec.clear();                              // Clear all elements in the vector

    // Display final capacity and size
    cout << "After clearing, the capacity of vector is " << vec.capacity() << endl;
    cout << "After clearing, the size of vector is " << vec.size() << endl;

    return 0;
}
