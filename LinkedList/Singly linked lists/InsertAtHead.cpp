// Insertion at head

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

    return 0;
}
