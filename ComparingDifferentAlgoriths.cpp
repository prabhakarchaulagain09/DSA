#include <iostream>
#include <vector>
#include <cstdlib>  // For rand() and srand()
#include <ctime>  
#include <algorithm> // For std::sort (for verification)

using namespace std;

// Function to generate a random array
vector<int> generateRandomArray(int size) {
    vector<int> arr(size);
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 10000; // Random numbers between 0 and 9999
    }
    return arr;
}

// Bubble Sort
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Selection Sort
void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

// Insertion Sort
void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Merge Sort
void merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; ++i)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; ++j)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

// Quick Sort
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; ++j) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Function to measure sorting time
double measureTime(void (*sortFunction)(vector<int>&), vector<int> arr) {
    clock_t start = clock();
    sortFunction(arr);
    clock_t end = clock();
    return double(end - start) / CLOCKS_PER_SEC;
}

double measureTimeRecursive(void (*sortFunction)(vector<int>&, int, int), vector<int> arr, int low, int high) {
    clock_t start = clock();
    sortFunction(arr, low, high);
    clock_t end = clock();
    return double(end - start) / CLOCKS_PER_SEC;
}

int main() {
    srand(time(0)); // Seed for random number generation

    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    vector<int> arr = generateRandomArray(size);

    // Make copies of the array for each sorting algorithm
    vector<int> arrBubble = arr;
    vector<int> arrSelection = arr;
    vector<int> arrInsertion = arr;
    vector<int> arrMerge = arr;
    vector<int> arrQuick = arr;

    // Measure time for each sorting algorithm
    double timeBubble = measureTime(bubbleSort, arrBubble);
    double timeSelection = measureTime(selectionSort, arrSelection);
    double timeInsertion = measureTime(insertionSort, arrInsertion);
    double timeMerge = measureTimeRecursive(mergeSort, arrMerge, 0, size - 1);
    double timeQuick = measureTimeRecursive(quickSort, arrQuick, 0, size - 1);

    // Output the results
    cout << "Time taken by Bubble Sort: " << timeBubble << " seconds" << endl;
    cout << "Time taken by Selection Sort: " << timeSelection << " seconds" << endl;
    cout << "Time taken by Insertion Sort: " << timeInsertion << " seconds" << endl;
    cout << "Time taken by Merge Sort: " << timeMerge << " seconds" << endl;
    cout << "Time taken by Quick Sort: " << timeQuick << " seconds" << endl;

    return 0;
}