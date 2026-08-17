#include<bits/stdc++.h>
using namespace std;

//class representing a node in double linked list
class Node{
    public:

    //store data of the node
    int data; 

    //pointer to the next node
    Node* next;

    //pointer to the previous node
    Node* prev;

    //constructor when node , next and previous exist
    Node(int data1, Node* next1, Node* prev1){
        data = data1;
        next = next1;
        prev = prev1;
    }

    //constructor when only node is provided
    Node(int data1){
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};

int main (){

    //initialize an array to make nodes
    vector<int> arr = {1, 2, 3, 4};

    //creating the head node of dubly linked list
    Node* head = new Node(arr[0]);

    //print node address and value
    //cout << head << endl;
    cout << head->data << endl;
}