// Delete at position

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

    void deleteAtpos(Node* &head, int pos){
        if(head == nullptr){
            cout << "List is empty";
            return;
        }
        
        if(pos == 0){
            head = head->next;
            return;
        }
        
        int curr_pos = 0;
        Node* prev = head;
        
        while(curr_pos != pos-1 &&  prev->next->next != nullptr && prev->next != nullptr){
            prev = prev->next;
            curr_pos++;
        }
        
        if (curr_pos+1 < pos) {
        cout << “Out of bound\n”;
        exit (0);
        }

        prev->next = prev->next->next;
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


    cout << "After deleting given position: \n";
    ll.deleteAtpos(head, 5);
    ll.display(head);
    
    return 0;
}