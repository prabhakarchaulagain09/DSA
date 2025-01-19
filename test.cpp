// Delete at position

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class LinkedList {
public:
    void display(Node* head){
        
        Node* temp = head;

        while(temp != nullptr){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "nullptr" << endl;
    }

    void deleteAtpos(Node* &head, int pos){
        if(head == nullptr){
            cout << "List is empty";
            return;
        }
        
        if(pos == 0){
            head = head->next;
            return;
        }
        
        int curr_pos = 0;
        Node* prev = head;
        
        while(curr_pos != pos-1 &&  prev->next->next != nullptr && prev->next != nullptr){
            prev = prev->next;
            curr_pos++;
        }
        
        while(prev->next == nullptr && prev->next->next ==nullptr){
        cout << "Our of bound";
        return;
        }
        
        prev->next = prev->next->next
    }