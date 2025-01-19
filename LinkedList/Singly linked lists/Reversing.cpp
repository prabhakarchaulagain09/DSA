// Reversing a linkedlist

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
    
    Node* reverse(Node* &head){
        
        Node* prevptr = nullptr;
        Node* currptr = head;
        
        //curr->next = prevptr;
        //move all 3 ptrs one step ahead
        while(currptr!=nullptr){
            Node* nextptr = currptr->next;
            currptr->next = prevptr;
            prevptr = currptr;
            currptr = nextptr;
        }
        //when loops ends , prevptr will be pointing to last node
        Node* new_head = prevptr;
        return new_head;
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


    cout << "After Reversing: \n";

    head = ll.reverse(head);
    ll.display(head);
    
    
    return 0;
}