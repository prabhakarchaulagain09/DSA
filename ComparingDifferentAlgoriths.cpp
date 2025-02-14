#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <chrono>

using namespace std;
using namespace std::chrono;

// Function to generate N random integers
vector<int> generateRandomNumbers(int N) {
    vector<int> numbers;
    srand(time(0));
    for (int i = 0; i < N; i++) {
        numbers.push_back(rand() % 1000); // Random numbers between 0 and 999
    }
    return numbers;
}

// Binary Search Algorithm
int binarySearch(const vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;
        if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1; // Not found
}

// Interpolation Search Algorithm
int interpolationSearch(const vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;
    while (left <= right && target >= arr[left] && target <= arr[right]) {
        int pos = left + ((target - arr[left]) * (right - left)) / (arr[right] - arr[left]);
        if (arr[pos] == target) return pos;
        if (arr[pos] < target) left = pos + 1;
        else right = pos - 1;
    }
    return -1; // Not found
}

// Selection Sort Algorithm
void selectionSort(vector<int>& arr) {
    for (size_t i = 0; i < arr.size() - 1; i++) {
        size_t minIndex = i;
        for (size_t j = i + 1; j < arr.size(); j++) {
            if (arr[j] < arr[minIndex]) minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
    }
}

// Merge Sort Algorithm
void merge(vector<int>& arr, int left, int mid, int right) {
    vector<int> temp(right - left + 1);
    int i = left, j = mid + 1, k = 0;
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) temp[k++] = arr[i++];
        else temp[k++] = arr[j++];
    }
    while (i <= mid) temp[k++] = arr[i++];
    while (j <= right) temp[k++] = arr[j++];
    for (i = left; i <= right; i++) arr[i] = temp[i - left];
}

void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

// Function to print the array
void printArray(const vector<int>& arr) {
    for (int num : arr) cout << num << " ";
    cout << endl;
}

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