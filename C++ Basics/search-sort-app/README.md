# Search and Sort Application

This project implements a console application that performs sorting and searching operations on a collection of random integers. The application includes the following algorithms:

## Algorithms Implemented

### Sorting Algorithms
- **Selection Sort**: A simple comparison-based sorting algorithm that divides the input list into two parts: a sorted and an unsorted part. It repeatedly selects the smallest (or largest) element from the unsorted part and moves it to the sorted part.
- **Merge Sort**: A divide-and-conquer algorithm that divides the input array into two halves, sorts them, and then merges the sorted halves back together.

### Searching Algorithms
- **Binary Search**: An efficient algorithm for finding an item from a sorted list of items. It works by repeatedly dividing the search interval in half.
- **Interpolation Search**: An improved variant of binary search that works on the principle of the uniform distribution of values. It estimates the position of the target value based on the values at the endpoints of the search interval.

## Project Structure

```
search-sort-app
├── src
│   ├── main.cpp         # Entry point of the application
│   ├── sorting.cpp      # Implementation of sorting algorithms
│   ├── searching.cpp     # Implementation of searching algorithms
│   └── utils.cpp        # Utility functions for random number generation and timing
├── include
│   ├── sorting.h        # Header file for sorting functions
│   ├── searching.h      # Header file for searching functions
│   └── utils.h          # Header file for utility functions
├── CMakeLists.txt       # CMake configuration file
└── README.md            # Project documentation
```

## Building the Application

To build the application, follow these steps:

1. Ensure you have CMake installed on your system.
2. Open a terminal and navigate to the project directory.
3. Create a build directory:
   ```
   mkdir build
   cd build
   ```
4. Run CMake to configure the project:
   ```
   cmake ..
   ```
5. Build the project:
   ```
   make
   ```

## Running the Application

After building the application, you can run it from the terminal:

```
./search-sort-app
```

You will be prompted to enter the size of the array. The application will generate random integers, perform sorting and searching operations, and display the results along with the execution time for each algorithm.

## Time Complexity

- **Selection Sort**: O(n^2)
- **Merge Sort**: O(n log n)
- **Binary Search**: O(log n)
- **Interpolation Search**: O(log log n) (best case), O(n) (worst case)

## Conclusion

This application serves as a practical demonstration of sorting and searching algorithms, providing insights into their performance and efficiency.