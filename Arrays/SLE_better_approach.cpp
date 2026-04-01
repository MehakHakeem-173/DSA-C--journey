#include<bits/stdc++.h>
using namespace std;

//function for finding the elements
void secondlargestElement(int arr[], int n){

    //if array is one are 0 elements, print -1 in both of their places
     if (n == 0 || n == 1)
        cout << -1 << " " << -1 << endl; 

        //initialze the veriable such that the first comparison will always update them correctly
        int small = INT_MAX, second_small = INT_MAX;
        int large = INT_MIN, second_large = INT_MIN;

        //run the loop n times and get the smaller everytime to compare it with the next one
        //the same goes for the large values
        for(int i=0;i<n;i++){
            small = min(small, arr[i]);
            large = max(large, arr[i]);
        }

        //run a loop n times, update the value of second small everytime to the 
        //index element if its smaller then the recently updated one and not the smallest
        for(int i=0;i<n;i++){
            if(arr[i]<second_small && arr[i] != small)
            second_small = arr[i];
        }

        //run a loop n times, update the value of second large everytime to the 
        //index element if its larger then the recently updated one and not the largest
        for(int i=0;i<n;i++){
            if(arr[i]>second_large && arr[i] != large)
            second_large = arr[i];
        }

        //print the values
        cout << "second small is " << second_small <<endl;
        cout << "second large is " << second_large << endl;  
}

int main(){
    //initialize the array with elements
    int arr[] = {4, 5, 6, 2, 7, 8};

    //size of array
    int n = sizeof(arr) / sizeof(arr[0]);

    //calling a function
    secondlargestElement(arr, n);
    return 0;
}