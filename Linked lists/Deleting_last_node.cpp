#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node (int val){
        data = val;
        next = NULL;
    }
};

//solution class to remove the the last node
class Solution{
    public:

    Node* removeTail(Node*head){

        //edge case for 0 or 1 node linked list
        if (head == NULL || head->next == NULL) {
            delete head;
            return NULL;
        }

        //node curr start at 1, the first node or head
        Node* curr = head;

        //untill the next to next exists, 
        //curr shift to the next node or curr = curr->next
        while(curr->next->next != NULL) {
            curr = curr->next;
        }

        //after the loop , the last node will be curr-node so delete it
        delete curr->next;
        curr->next = NULL;

        //return update list
        return head;
    }
};

int main(){

    //creating a linked list
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    //solution object
    Solution obj;

    //calling function 
    head = obj.removeTail(head);

    //printing the list
    Node* temp = head;
    while(temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;

}