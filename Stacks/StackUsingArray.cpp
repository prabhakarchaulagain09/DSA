#include <iostream>
#include <climits> // For INT_MIN
using namespace std;

class Stack {
private:
    int capacity;
    int* arr;
    int top;

public:
    // Constructor
    Stack(int c) {
        this->capacity = c;
        this->arr = new int[c];
        this->top = -1;
    }

    // Push function
    void push(int data) {
        if (this->top == this->capacity - 1) { 
            cout << "The stack is full (Overflow condition)\n";
            return;
        }
        this->top++;
        this->arr[this->top] = data;
    }

    // Pop function
    int pop() {
        if (this->top == -1) { 
            cout << "Underflow\n";
            return INT_MIN; // Returns a special value for underflow
        }
        int popped = this->arr[this->top];
        this->top--;
        return popped;
    }

    // Top function
    int getTop() { 
        if (this->top == -1) {
            cout << "Underflow\n";
            return INT_MIN;
        }
        return this->arr[this->top];
    }

    // Check if stack is empty
    bool isEmpty() {
        return this->top == -1;
    }

    // Get the size of the stack
    int size() {
        return this->top + 1;
    }

    // Check if stack is full
    bool isFull() {
        return this->top == this->capacity - 1; 
    }
};

int main() {
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6); // This will trigger the overflow condition
    cout << "Top element: " << st.getTop() << endl;
    cout << "Stack size: " << st.size() << endl;

    st.pop();
    cout << "Top element after pop: " << st.getTop() << endl;
    cout << "Stack size after pop: " << st.size() << endl;

    return 0;
}
