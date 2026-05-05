#include<bits/stdc++.h>
using namespace std;

//node class represent each class in a linked list
class Node{
    public:

    //data stored in the node
    int data;

    //pointer to the next node
    Node* next;

    //constructer with data and next pointer
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    //constructor with only data
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

// solution class to handle linked list operation 
class Solution{
    public:

    //function to insert a new node at the head
    Node* insertAtHead(Node* head, int newData){
        //head = current list, newData = value to insert

        Node* newNode = new Node(newData, head);
        return newNode;
    }

    void printList(Node* head){
        Node* temp = head;
        while (temp != nullptr){
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }

};

int main(){
    Solution sol;

    Node* head = new Node(2);
    head->next = new Node(3);

    cout << "original list: ";
    sol.printList(head);

    head = sol.insertAtHead(head, 1);

    cout << "After Inserting head: ";
    sol.printList(head);

    return 0;
}