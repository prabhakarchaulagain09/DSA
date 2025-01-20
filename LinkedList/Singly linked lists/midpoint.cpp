// Midpoint of a linkedlist

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
    
    void midpoint(Node* &head){
        
    int ll_length = 0;
    Node* temp = head;
    
    while(temp != nullptr){
        temp = temp->next;
        ll_length++;
    }
    
    int mid_point = ll_length/2;
    int current_pos = 0;

    Node* temp2 = head;
    while(temp2 != nullptr){
        temp2 = temp2->next;
        current_pos++;
        
        if (current_pos == mid_point){
            break;
        }
    }
    
    cout << temp2->data;

    }
    
};
    
int main(){
    
    LinkedList ll;


    Node* head = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(3);
    Node* node4 = new Node(4);
    Node* node5 = new Node(5);
    Node* node6 = new Node(6);
    

    head->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;

    ll.midpoint(head);
    
    return 0;
}