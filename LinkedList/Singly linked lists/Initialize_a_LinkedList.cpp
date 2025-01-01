// How to initialize a LinkedList

#include<iostream>
using namespace std;

class Node{
        public:
            int data;
            Node* next;

            Node(int value){
                data = value;
                next = nullptr;
            }

};

int main(){

    Node* node1 = new Node(10); //created a node with data = 10 and next as nullptr.

    cout << node1->data;

    return 0;


}