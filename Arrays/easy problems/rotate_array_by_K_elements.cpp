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
        
        //loop to print the value after those we are rotating
        for (int i=n-k; i<n; i++){ //start from 3 & 4
            temp[i-(n-k)] = arr[i]; //for index 0 and 1, store index 3 and 4 
        }


        for(int i=n-k-1; i>=0; i--){ //start from index 2, go to index 0
            arr[i+k] = arr[i]; // shift 0, 1, and 2 to 2, 3 and 4 , leaving 0 and 1 empty
        }

        
        for (int i=0; i<k; i++){ //start from the empty 0 and 1 and put the array temp in there
            arr[i] = temp[i];  
        }
    }

    void rotateLeft(int arr[] , int n, int k){

        //if array size is zero , return
        if(n == 0) return;

        //take modulus if value of k excedes n
        k = k % n;

        //temparory array with size k
        int temp[k];
        
        
        for (int i=0; i<k; i++){//go from index 0 and 1 of arr
            temp[i] = arr[i]; // store the value of arr[0 and 1] in temp [0 and 1]
        }


        for(int i=k; i<n; i++){ //start from 2 to 4 of arr 
            arr[i-k] = arr[i];//put the value of 2, 3, and 4, in 0, 1, and 2
        }


        for (int i=0; i<k; i++){ //start from 0 and 1 of temp
            arr[n-k+i] = temp[i]; //put the value of temp in arr 3 and 4
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