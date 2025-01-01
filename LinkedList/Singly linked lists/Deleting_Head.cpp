// Delete head

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

    void deleteAtHead(Node* &head){
        
        Node* temp = head;
        
        head = head->next;
        free(temp);
        
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


    Node* head = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(3);


    head->next = node2;
    node2->next = node3;


    cout << "Original list: ";
    list.display(head);


    cout << "After deleting head: ";
    list.deleteAtHead(head);
    list.display(head);


    cout << "After deleting head again: ";
    list.deleteAtHead(head);
    list.display(head);


    cout << "After deleting head again: ";
    list.deleteAtHead(head);
    list.display(head);


    cout << "Attempt to delete from empty list: ";
    list.deleteAtHead(head);

    return 0;
}
