// Insertion at position

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
    void insertAtHead(Node* &head, int value) {
        
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
}

    void insertAtposition(Node* &head, int value, int pos){
        
        Node* newNode = new Node(value);
        int current_pos = 0;
        Node* temp = head;
        while(current_pos != pos-1){
            temp = temp->next;
            current_pos++;
        } 
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void display(Node* head){
        
        Node* temp = head;

        while(temp != nullptr){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "nullptr" << endl;
    }
};

int main() {
    LinkedList list;

    Node* head = nullptr;

    list.insertAtHead(head, 2);
    list.display(head);
    list.insertAtHead(head, 3);
    list.display(head);
    list.insertAtposition(head, 4, 1);
    list.display(head);

    return 0;
}
