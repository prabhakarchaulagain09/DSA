// Join a linkedlist

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
    
    Node* head;
    LinkedList(int value){
        head = new Node(value);
    }
    
    LinkedList(Node* node){
    head = node;
    }
    
    void display(){
        
    Node* temp = head;

    while(temp != nullptr){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "nullptr" << endl;
    }

    
    
    Node* joinList(Node* head2){
        
        //Making pointers
        Node* ptr1 = head;
        Node* ptr2 = head2;
        Node* result = new Node(0);
        Node* finalResult = result;
        
        while(ptr1!=nullptr && ptr2!=nullptr){
            if (ptr1->data <= ptr2->data){
                result->next = ptr1;
                ptr1 = ptr1->next;
                result = result->next;
            }
            else{
                result->next = ptr2;
                ptr2 = ptr2->next;
                result = result->next;
                
            }
        }
        if (ptr1 != nullptr){
            result->next = ptr1;
        }
        if (ptr2 != nullptr){
            result->next = ptr2;
        }
        
        return finalResult->next;
        
    }
};

int main() {
    LinkedList ll1(1);
    LinkedList ll2(1);
    
    Node* node2 = new Node(2);
    Node* node3 = new Node(3);
    Node* node4 = new Node(4);
    Node* node5 = new Node(5);

    ll1.head->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;


    
    Node* head2 = new Node(1);
    Node* node6 = new Node(3);
    Node* node7 = new Node(4);
    Node* node8 = new Node(6);
    Node* node9 = new Node(10);

    ll2.head->next = node6;
    node6->next = node7;
    node7->next = node8;
    node8->next = node9;
    
    ll1.display();
    ll2.display();
    
    Node* ResultNode = ll1.joinList(ll2.head);
    
    LinkedList ll3(ResultNode);
    
    ll3.display();
    return 0;
}
