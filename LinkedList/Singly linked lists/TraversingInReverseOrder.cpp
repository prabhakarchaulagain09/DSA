// Traversing a linked list in reverse order.

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
        cout << "nullptr\n\n" << endl;
    }
    
    void reversePrint(Node* &head){
        if(head == nullptr){
            return;
        }
        reversePrint(head->next);
        cout << head->data << " -> ";
    }
    
};
    
int main(){
    
    LinkedList ll;


    Node* head = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(3);
    Node* node4 = new Node(4);
    Node* node5 = new Node(5);

    head->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;


    cout << "Original list: \n";
    ll.display(head);


    cout << "Printing in reverse order: \n";

    ll.reversePrint(head);
    
    return 0;
}