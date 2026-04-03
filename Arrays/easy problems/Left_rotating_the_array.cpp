#include<bits/stdc++.h>
using namespace std;

//function to rotate array
void solve(int arr[], int n){

    //veriable to store the new array
    int temp [n];

    //loop to assign elements to the temprary array after 0 index
    for (int i=1; i<n; i++){
        temp[i-1] = arr[i];
    }

    //assigning the ist index to the last
    temp[n-1] = arr[0];

    //loop to print the output array
    for(int i=0; i<n; i++){
        cout << temp[i] << " ";
    }
}

int main(){
    //initializeing array
    int arr[] = {4, 5, 6, 3, 2, 6};

    //size of array
    int n = 6;

    //calling the function
    solve(arr, n);
    return 0;   
}