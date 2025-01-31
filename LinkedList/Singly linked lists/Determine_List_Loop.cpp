// To find loop in a linkedlist

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

    void hasLoop(Node* head) {
        Node* slow = head;
        Node* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                cout << "There is a loop";
                exit(1);
            }
        }
        cout << "No loop in the list";
    }
};

int main() {
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
//    node5->next = node3; 

    ll.hasLoop(head);

    return 0;
}
