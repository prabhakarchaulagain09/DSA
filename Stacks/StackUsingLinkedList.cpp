#include<iostream>
#include<climits>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int value){
        this->data = value;
        this->next = nullptr;
    }

};

class Stack{
private:
    Node* head;
    int capacity;
    int currSize;
public:
    Stack(int c){
        this->capacity = c;
        this->currSize = 0;
        head = nullptr;
    }

    bool isEmpty(){
        return this->head == nullptr;
    }

    bool isFull(){
        return this->currSize == this->capacity;
    }

    void push(int data){

        if(this->currSize == this->capacity){
            cout<<"Overflow\n";
            return;
        }

        Node* new_node = new Node(data);
        new_node->next = this->head;
        this->head = new_node;
        this->currSize++;
    }

    int pop(){
        if(this->head == nullptr){
            cout<<"Underflow\n";
            return INT_MIN;
        }
        Node* new_head = this->head->next;
        this->head->next = nullptr;
        Node* toberemoved = this->head;
        int result = toberemoved->data;
        delete toberemoved;
        this->head = new_head;
        return result;
    }

    int getTop(){
        if(this->head == nullptr){
            cout<<"Underflow\n";
            return INT_MIN;
        }
    }

    int size(){
        return this->currSize;
    }

};

int main(){

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