#include<bits/stdc++.h>
using namespace std;


//Node class to represent each element in the linked list
class Node{
    public:
    int data;
    Node* next;

    //constructor to initialize data and next pointer
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

//class for finding the lehgth
class Solution {
    public:
    int findlength(Node* head){

        //initializing veriable for countig the nodes
        int count = 0;

        //assigning the value of ist node to temp
        Node* temp = head;

        //loop run until its reach the last node
        while(temp != nullptr){

            //incremet count
            count++;

            //temp shift to next node
            temp = temp->next;
        }

        //return count
        return count;
    }
};

int main(){

    //creating a sample linked list
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    Solution obj;

    //printing the answer
    cout << "length of the linked list: " 
    << obj.findlength(head) << endl;

    return 0;
}