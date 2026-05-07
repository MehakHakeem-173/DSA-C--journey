#include<bits/stdc++.h>
using namespace std;

//structure node represent each node 
struct Node{
    int data;
    Node* next;

//constructor Node for current node and pointer to next
    Node(int val){
        data = val;
        next = NULL;
    }
};


//class solution to find the value
class Solution{
    public:
    bool searchValue(Node* head, int key){

        //pointer to transvers the list
        Node* current = head;

        //loop to find the value
        while (current != NULL){
            if (current->data == key){
                return true;
            }


            //increment the node
            current = current->next;
        }

        return false;
    }
};

int main(){

    //start a linked list
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);


    Solution obj;

    //calling function for searchig 
    if (obj.searchValue(head, 20))

    //printing the result
    cout << "Found ";
    else{
        cout << "Not found";
    }

    return 0;
}