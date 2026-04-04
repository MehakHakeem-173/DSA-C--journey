#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    
    //function to rotate to right
    void rotateRight(int arr[], int n, int k){

        //if array size is 0, return
        if (n == 0) return;
        //normalize if k is greater then n
        k = k % n;

        //temp array to store the elements in
        int temp[k];
        
        //loop to print the value after those we arerotating
        for (int i=n-k; i<n; i++){ //start from 4 to 5
            temp[i-n+k] = arr[i]; //index zero of temp is index 3 of arr which has value four
        }

        //
        for(int i=n-k-1; i>=0; i--){ //from index 2 to zero, (value 2 to 1)
            arr[i+k] = arr[i];
        }

        //
        for (int i=0; i<k; i++){ //
            arr[i] = temp[i];  
        }
    }

    void rotateLeft(int arr[] , int n, int k){
        if(n == 0) return;
        k = k % n;
        int temp[k];
        
        for (int i=0; i<k; i++){
            temp[i] = arr[i];
        }
        for(int i=k; i<n; i++){
            arr[i-k] = arr[i];
        }

        for (int i=0; i<k; i++){
            arr[n-k+i] = temp[i];
        }
    }
};

int main(){
    Solution sol;

    //arr 1 to rotate
    int arr1[] = {1, 2, 3, 4, 5};
    //sizeof array
    int n = 5; 
    //numbers upto rotate
    int k = 2;

    //calling the function
    sol.rotateRight(arr1, n, k);
    //printing the new array
    cout << "array after right rotating by " << k << " elements ";
    cout << endl;
    for (int i=0; i<n; i++){
        cout << arr1[i] << " ";
    }
    cout << endl;


    //array 2 to rotate
    int arr2[] = {1, 2, 3, 4, 5};
    //size of array
    n = 5;
    //number upto rotate
    k = 2;

    //calling the function
    sol.rotateLeft(arr2, n, k);
    //printing the new array
    cout << "array after left rotating by " << k << " elements ";
    cout << endl;
    for (int i=0; i<n; i++){
        cout << arr2[i] << " ";
    }
    cout << endl;
}