#include<bits/stdc++.h>
using namespace std;

//node structure for DLL
struct Node{
    int data;
    Node* prev;
    Node* next;
    Node(int val){
        data = val;
        prev = NULL;
        next = NULL;

    }
};

//class solution to delete the node
class Solution{
    public:
    Node* deleteTail(Node* head){

        //if LL has only one or two nodes , return NULL
        if(head == NULL) {
            return NULL;
        }

        if (head->next == NULL) {
            delete head;
            return NULL;
        }

        //treverse to the last node and delete last node
        Node* temp = head;
        while(temp->next != NULL){

            //move farward
            temp = temp->next;
        }

        //temp is NULL
        temp->prev->next = NULL;

        //delete temp
        delete temp;

        //return head
        return head;
    }
};

int main(){

    //initiate DLL
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->prev = head;
    head->next->next = new Node(3);
    head->next->next->prev = head->next;

    //creating object in solution class
    Solution obj;

    //calling function
    head = obj.deleteTail(head);

    //printing the DLL after deleting the 
    Node* curr = head;
    while(curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }

    return 0;
}