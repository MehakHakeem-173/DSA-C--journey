#include<bits/stdc++.h>
using namespace std;

//creat a class node
class Node {
    public:

    //data value
    int data;

    //pointer to next node
    Node* next;

    //constructor with data and next
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

int main(){

    //initializing a vector array
    vector<int> arr = {2, 5, 3, 4};

    //creat first node
    Node* y = new Node(arr[0]);

    //print memory location
    cout << y << endl;

    //print data stored in node
    cout << y->data << endl;
    return 0;
}