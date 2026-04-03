#include<bits/stdc++.h>
using namespace std;


//fucntion to see if the array is sorted
bool isSorted(int arr[], int n){

    //loop for checking the array
    for (int i=1; i<n; i++){
        if (arr[i] < arr[i-1])
        return false;
    }
    return true;
}

int main (){

    //array to check
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    //size of array
    int n = 7;
    //printing the result
    printf("%s", isSorted(arr, n) ? "true" : "false" );
    //cout << (isSorted(arr, n) ? "true" : "false" );
}