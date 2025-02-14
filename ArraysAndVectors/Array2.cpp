// Write a program that takes an array of integers and returns a new array thart contains only the positive numbers from the original array.
// Use pointers to iterate through the array. The program should also use a conditional expression to check if the number is positive or negative.

#include <iostream>
using namespace std;

int* filterPositiveNumbers(int* arr, int size, int& newSize) {

    newSize = 0;
    for (int i = 0; i < size; ++i) {
        if (*(arr + i) > 0) {
            ++newSize;
        }
    }

 
    int* positiveArr = new int[newSize];
    int index = 0;


    for (int i = 0; i < size; ++i) {
        if (*(arr + i) > 0) {
            *(positiveArr + index) = *(arr + i);
            ++index;
        }
    }

    return positiveArr;
}

int main() {
    int arr[] = {-1, 2, -3, 4, 5, -6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int newSize = 0;

    int* positiveArr = filterPositiveNumbers(arr, size, newSize);

    cout << "Positive numbers: ";
    for (int i = 0; i < newSize; ++i) {
        cout << *(positiveArr + i) << " ";
    }
    cout << endl;


    delete[] positiveArr;

    return 0;
}