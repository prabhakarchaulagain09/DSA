// Insertion at tail

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
    
    void insertAtTail(Node* &head, int value){
        
        Node* newNode = new Node(value);
           if (head == nullptr) { 
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr){
            temp = temp->next;
        }
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



    list.insertAtTail(head, 1);
    list.insertAtTail(head, 2);
    list.insertAtTail(head, 3);
    list.display(head);
    list.insertAtTail(head, 4);
    list.display(head);
    list.insertAtTail(head, 5);
    list.display(head);

    return 0;
}
