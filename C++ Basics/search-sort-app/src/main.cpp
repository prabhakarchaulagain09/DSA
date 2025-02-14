#include <iostream>
#include <chrono>
#include "sorting.h"
#include "searching.h"
#include "utils.h"

using namespace std;
using namespace std::chrono;

int main() {
    int N, target;
    cout << "Enter the number of random integers (N): ";
    cin >> N;

    vector<int> numbers = generateRandomNumbers(N);
    cout << "Generated numbers: ";
    printArray(numbers);

    // Sorting using Selection Sort
    auto start = high_resolution_clock::now();
    selectionSort(numbers);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    cout << "Sorted numbers (Selection Sort): ";
    printArray(numbers);
    cout << "Time taken by Selection Sort: " << duration.count() << " milliseconds" << endl;

    // Sorting using Merge Sort
    start = high_resolution_clock::now();
    mergeSort(numbers, 0, numbers.size() - 1);
    stop = high_resolution_clock::now();
    duration = duration_cast<milliseconds>(stop - start);
    cout << "Sorted numbers (Merge Sort): ";
    printArray(numbers);
    cout << "Time taken by Merge Sort: " << duration.count() << " milliseconds" << endl;

    // Searching
    cout << "Enter the number to search: ";
    cin >> target;

    // Binary Search
    start = high_resolution_clock::now();
    int index = binarySearch(numbers, target);
    stop = high_resolution_clock::now();
    duration = duration_cast<milliseconds>(stop - start);
    if (index != -1) cout << "Element found at index " << index << " (Binary Search)" << endl;
    else cout << "Element not found (Binary Search)" << endl;
    cout << "Time taken by Binary Search: " << duration.count() << " milliseconds" << endl;

    // Interpolation Search
    start = high_resolution_clock::now();
    index = interpolationSearch(numbers, target);
    stop = high_resolution_clock::now();
    duration = duration_cast<milliseconds>(stop - start);
    if (index != -1) cout << "Element found at index " << index << " (Interpolation Search)" << endl;
    else cout << "Element not found (Interpolation Search)" << endl;
    cout << "Time taken by Interpolation Search: " << duration.count() << " milliseconds" << endl;

    return 0;
}