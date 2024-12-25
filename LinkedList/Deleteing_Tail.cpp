// Deleteing Tail

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

    void deleteAtTail(Node* &head){
        
        Node* second_last = head;
        
        while(second_last->next->next != 0){
            second_last = second_last->next;
        }
        
        delete second_last->next;
        second_last->next = nullptr;
        

        
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

    // Create and link nodes
    Node* head = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(3);

    head->next = node2;
    node2->next = node3;

    // Display the original list
    cout << "Original list: ";
    list.display(head);

    // Delete the tail node and display the list
    cout << "After deleting tail: ";
    list.deleteAtTail(head);
    list.display(head);

    // Delete the tail again
    cout << "After deleting tail again: ";
    list.deleteAtTail(head);
    list.display(head);

    // Delete the tail again (last node)
    cout << "After deleting tail again: ";
    list.deleteAtTail(head);
    list.display(head);

    // Attempt to delete from an empty list
    cout << "Attempt to delete from empty list: ";
    list.deleteAtTail(head);

    return 0;
}
