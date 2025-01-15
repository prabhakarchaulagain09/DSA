# Dynamic Memory Allocation in C++

Dynamic memory allocation is the process of allocating memory during the program's runtime. In C++, this is primarily done using the `new` and `delete` operators. Dynamic memory is allocated on the **heap** (also called the free store), which provides more flexibility compared to stack memory allocation.

## Why Use Dynamic Memory Allocation?
- **Variable Size**: When the size of a variable or data structure is not known at compile time.
- **Lifetime Control**: To create objects or variables whose lifetime is controlled manually rather than automatically by the scope.
- **Efficient Memory Use**: Allocate memory only when needed and release it when no longer required.

## The `new` Operator
The `new` operator is used to allocate memory dynamically on the heap. It returns a pointer to the allocated memory.

### Syntax:
```cpp
pointer_type = new data_type;
```

### Examples:
1. **Allocating Memory for a Single Variable**:
    ```cpp
    int* ptr = new int; // Allocates memory for an integer
    *ptr = 10;         // Assigns a value
    std::cout << *ptr; // Outputs 10
    delete ptr;        // Deallocates the memory
    ```

2. **Allocating Memory for an Array**:
    ```cpp
    int* arr = new int[5]; // Allocates memory for an array of 5 integers
    for (int i = 0; i < 5; ++i) {
        arr[i] = i * 2;   // Assigns values to the array
    }
    delete[] arr;          // Deallocates the array memory
    ```

3. **Allocating Memory for an Object**:
    ```cpp
    class MyClass {
    public:
        MyClass() { std::cout << "Constructor called\n"; }
    };
    MyClass* obj = new MyClass(); // Allocates memory and calls the constructor
    delete obj;                  // Frees memory and calls the destructor
    ```

## The `delete` Operator
The `delete` operator is used to deallocate memory that was previously allocated with `new`. This frees up the memory on the heap.

### Syntax:
- To delete a single variable:
    ```cpp
    delete pointer;
    ```
- To delete an array:
    ```cpp
    delete[] pointer;
    ```

### Key Points:
- Always match `new` with `delete` and `new[]` with `delete[]`.
- Failing to deallocate memory can lead to **memory leaks**.

### Example:
```cpp
int* num = new int(42); // Allocates and initializes
std::cout << *num;      // Outputs 42

delete num;             // Frees memory
num = nullptr;          // Avoids dangling pointer
```

## Other Operators Related to Dynamic Memory Allocation

### `malloc` and `free`
These functions are inherited from C and are part of the `<cstdlib>` header. They are used for dynamic memory allocation but do not call constructors or destructors.

#### Syntax:
- `malloc`:
    ```cpp
    void* malloc(size_t size);
    ```
- `free`:
    ```cpp
    void free(void* ptr);
    ```

#### Example:
```cpp
#include <cstdlib>

int* ptr = (int*)malloc(sizeof(int)); // Allocates memory for an integer
*ptr = 5;
std::cout << *ptr; // Outputs 5

free(ptr);         // Frees memory
```

### `calloc`
Allocates memory for an array and initializes all elements to zero.

#### Syntax:
```cpp
void* calloc(size_t num, size_t size);
```

#### Example:
```cpp
int* arr = (int*)calloc(5, sizeof(int)); // Allocates and initializes an array of 5 integers
for (int i = 0; i < 5; ++i) {
    std::cout << arr[i] << " "; // Outputs 0 0 0 0 0
}
free(arr);
```

### `realloc`
Resizes previously allocated memory.

#### Syntax:
```cpp
void* realloc(void* ptr, size_t new_size);
```

#### Example:
```cpp
int* arr = (int*)malloc(5 * sizeof(int));
arr = (int*)realloc(arr, 10 * sizeof(int)); // Resizes the array to hold 10 integers
free(arr);
```

### `new` vs `malloc`
| Feature          | `new`          | `malloc`         |
|------------------|----------------|------------------|
| Memory Type      | Allocates on heap | Allocates on heap |
| Returns          | Typed pointer  | `void*` pointer  |
| Constructor Call | Yes            | No               |
| Syntax Simplicity| Higher         | Lower            |
| Deallocation     | `delete`       | `free`           |

---

By understanding and using these operators appropriately, you can effectively manage memory in your C++ programs, ensuring optimal performance and avoiding common pitfalls like memory leaks or dangling pointers.
