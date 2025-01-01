// Delete the given position

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

    void deleteAtPosition(Node* &head, int pos){
        
        int curr_pos = 0;
        
        Node* prev = head;
        
        while(curr_pos != pos-1){
            prev = prev->next;
            curr_pos++;
        }
        
        Node* temp = prev->next;
        prev->next = prev->next->next;
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


    cout << "After deleting given position: ";
    list.deleteAtPosition(head, 1);
    list.display(head);

    return 0;
}
