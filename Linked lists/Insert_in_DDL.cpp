#include<bits/stdc++.h>
using namespace std; 

class Node{
public:
    int data; 
    Node* next;
    Node* prev;

    Node(int data1, Node* next1, Node* prev1){
        data = data1;
        next = next1;
        prev = prev1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
        prev = nullptr;
    }

};

//function to convert array into double linked list
Node* convertArr2DLL(vector<int> arr){

    //making 1st node from array [0]
    Node* head = new Node(arr[0]);

    //converthead to previous
    Node* prev = head;

    //loop to convert all the array indexes to nodes of DLL
    for (int i=1; i<arr.size(); i++){

        //calling the function node to make nodes of all the elements
        Node* temp = new Node(arr[i], nullptr, prev);

        //first point to the node previous to the next , which is temp
        //we make DDL in this way
        prev->next = temp; 

        //move farword
        prev = temp;
    }
    return head;
}

//printing the values/data in nodes
void print(Node* head) {

    //while head is not equal to the last node, print head data and move on
    while (head != nullptr){
        cout << head->data << " ";
        head = head->next;
    }
}


//function to insert 
Node* insertAtTail(Node* head, int k){

    //make a new node of value k(10)
    Node* newNode = new Node(k);

    //if linked list is empty, return the node
    if (head == nullptr){
        return newNode;
    }

    //walk through the linked list to the last node until tail-> next is nullptr
    Node* tail = head;

    //at this stage, tail and node is same so we can get the same value after returning any of them
    while(tail->next != nullptr){
        tail = tail->next;
    }

    //now insert the tail->next as new node
    //to keep it DLL , newNode->prev is tail
    tail->next = newNode;
    newNode->prev = tail;
    return head;
}

int main(){

    //initialte an array
    vector<int> arr = {2, 3, 4, 6};

    //calling the function to convert array into linkedlist
    Node* head = convertArr2DLL(arr);

    cout << "doubly linked list initially: " << endl;
    
    
    print(head);
    

    //inserting the node
    cout <<" doubly linked list after insertion: " << endl;

    //calling the function
    head = insertAtTail(head, 10);
    print(head);
    
    return 0;

}