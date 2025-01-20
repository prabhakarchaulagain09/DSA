// Delete by value

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

    void deleteByValue(Node* &head, int value){
/*        Node* current = head;
    
        while(current->next->data != value && current->next != nullptr){
            current = current->next;
        }
        
        if(current->next == nullptr){
            
            return;
        }   
        else {
            current->next = current->next->next;
        }
        
    }*/
    
    Node* current = head;
    
    if(current->data == value){
        head = head->next;
        return;
    }
    
    while(current->next){
        if (current->next->data == value){
            current->next = current->next->next;
            return;
        }
        current = current->next;
    }
    cout << "Value not present in the list";
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


    cout << "After deleting given value: \n";
    ll.deleteByValue(head, 1);
    ll.display(head);
    
    return 0;
}